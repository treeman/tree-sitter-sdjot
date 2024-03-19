#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

typedef enum {
  CLOSE_PARAGRAPH,
  BLOCK_CLOSE,
  DIV_MARKER_BEGIN,
  DIV_MARKER_END,
  IGNORED
} TokenType;

typedef enum { DIV } BlockType;

typedef struct {
  BlockType type;
  uint8_t level;
} Block;

typedef struct {
  Array(Block *) * open_blocks;

  // How many BLOCK_CLOSE we should output right now?
  uint8_t blocks_to_close;

  // Delayed output of a token.
  TokenType delayed_token;
  // Allows us to consume the width of a delayed token.
  uint8_t delayed_token_width;
} Scanner;

static void push_block(Scanner *s, BlockType type, uint8_t level) {
  Block *b = ts_malloc(sizeof(Block));
  b->type = type;
  b->level = level;

  array_push(s->open_blocks, b);
}

static void remove_block(Scanner *s) {
  if (s->open_blocks->size > 0) {
    ts_free(array_pop(s->open_blocks));
    if (s->blocks_to_close > 0) {
      --s->blocks_to_close;
    }
  }
}

static uint8_t consume_chars(TSLexer *lexer, char c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    lexer->advance(lexer, false);
    ++count;
  }
  return count;
}

static bool handle_blocks_to_close(Scanner *s, TSLexer *lexer) {
  if (s->open_blocks->size == 0) {
    return false;
  }

  // If we reach eof with open blocks, we should close them all.
  if (lexer->eof(lexer) || s->blocks_to_close > 0) {
    lexer->result_symbol = BLOCK_CLOSE;
    remove_block(s);
    return true;
  }
  return false;
}

// Mark that we should close `count` blocks.
// This call will only emit a single BLOCK_CLOSE token,
// the other are emitted in `parse_block_close`.
//
// The final block type (such as a `DIV_END` token)
// is emitted from `output_delayed_token` when all BLOCK_CLOSE
// tokens are handled.
static void close_blocks_with_final_token(Scanner *s, TSLexer *lexer,
                                          size_t count, TokenType final,
                                          uint8_t final_token_width) {
  remove_block(s);
  s->blocks_to_close = s->blocks_to_close + count - 1;
  lexer->result_symbol = BLOCK_CLOSE;
  s->delayed_token = final;
  s->delayed_token_width = final_token_width;
}

// How many blocks from the top of the stack can we find a matching block?
// If it's directly on the top, returns 1.
// If it cannot be found, returns 0.
static size_t number_of_blocks_from_top(Scanner *s, BlockType type,
                                        uint8_t level) {
  for (int i = s->open_blocks->size - 1; i >= 0; --i) {
    Block *b = *array_get(s->open_blocks, i);
    if (b->type == type && b->level == level) {
      return s->open_blocks->size - i;
    }
  }
  return 0;
}

static bool output_delayed_token(Scanner *s, TSLexer *lexer,
                                 const bool *valid_symbols) {
  if (s->delayed_token == IGNORED || !valid_symbols[s->delayed_token]) {
    return false;
  }

  lexer->result_symbol = s->delayed_token;
  s->delayed_token = IGNORED;
  while (s->delayed_token_width--) {
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  return true;
}

static bool parse_close_paragraph(TSLexer *lexer) {
  // Mark the end before advancing so that the CLOSE_PARAGRAPH token doesn't
  // consume any characters.
  lexer->mark_end(lexer);

  uint8_t colons = consume_chars(lexer, ':');
  if (colons >= 3) {
    lexer->result_symbol = CLOSE_PARAGRAPH;
    return true;
  } else {
    return false;
  }
}

static bool parse_div(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[DIV_MARKER_BEGIN] && !valid_symbols[DIV_MARKER_END]) {
    return false;
  }
  uint8_t colons = consume_chars(lexer, ':');

  if (colons < 3) {
    return false;
  }

  size_t from_top = number_of_blocks_from_top(s, DIV, colons);

  // We could check if either DIV_MARKER_BEGIN or DIV_MARKER_END are valid here,
  // but as the grammar is set up they're both always valid at the same time.
  if (from_top > 0) {
    // Found a div we should close.
    close_blocks_with_final_token(s, lexer, from_top, DIV_MARKER_END, colons);
    return true;
  } else {
    lexer->mark_end(lexer);
    push_block(s, DIV, colons);
    lexer->result_symbol = DIV_MARKER_BEGIN;
    return true;
  }
}

bool tree_sitter_sdjot_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  Scanner *s = (Scanner *)payload;

  // Mark end here to allow us to advance further without the tokens we advance
  // over to be included into the output symbol.
  lexer->mark_end(lexer);

  if (valid_symbols[BLOCK_CLOSE] && handle_blocks_to_close(s, lexer)) {
    return true;
  }

  if (output_delayed_token(s, lexer, valid_symbols)) {
    return true;
  }

  if (valid_symbols[CLOSE_PARAGRAPH] && parse_close_paragraph(lexer)) {
    return true;
  }

  if (parse_div(s, lexer, valid_symbols)) {
    return true;
  }

  return false;
}

static void init(Scanner *s) {
  array_init(s->open_blocks);
  s->blocks_to_close = 0;
  s->delayed_token = IGNORED;
}

// If we need to allocate/deallocate state, we do it in these functions.
void *tree_sitter_sdjot_external_scanner_create() {
  Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
  s->open_blocks = ts_malloc(sizeof(Array(Block *)));
  init(s);
  return s;
}

void tree_sitter_sdjot_external_scanner_destroy(void *payload) {
  Scanner *s = (Scanner *)payload;
  for (size_t i = 0; i < s->open_blocks->size; ++i) {
    ts_free(array_get(s->open_blocks, i));
  }
  array_delete(s->open_blocks);
  ts_free(s);
}

// If we have state, we should load and save it in these functions.
unsigned tree_sitter_sdjot_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  buffer[size++] = (char)s->blocks_to_close;
  buffer[size++] = (char)s->delayed_token;
  buffer[size++] = (char)s->delayed_token_width;

  for (size_t i = 0; i < s->open_blocks->size; ++i) {
    Block *b = *array_get(s->open_blocks, i);
    buffer[size++] = (char)b->type;
    buffer[size++] = (char)b->level;
  }

  return size;
}

void tree_sitter_sdjot_external_scanner_deserialize(void *payload, char *buffer,
                                                    unsigned length) {
  Scanner *s = (Scanner *)payload;
  init(s);
  if (length > 0) {
    size_t size = 0;
    s->blocks_to_close = (uint8_t)buffer[size++];
    s->delayed_token = (TokenType)buffer[size++];
    s->delayed_token_width = (uint8_t)buffer[size++];

    while (size < length) {
      BlockType type = (BlockType)buffer[size++];
      uint8_t level = (uint8_t)buffer[size++];
      push_block(s, type, level);
    }
  }
}
