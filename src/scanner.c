#include "tree_sitter/parser.h"

typedef enum { CLOSE_PARAGRAPH } TokenType;

uint8_t consume_chars(TSLexer *lexer, char c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    lexer->advance(lexer, false);
    ++count;
  }
  return count;
}

bool parse_close_paragraph(TSLexer *lexer) {
  // Mark the end before advancing so that the CLOSE_PARAGRAPH token doesn't
  // consume any characters.
  lexer->mark_end(lexer);

  uint8_t colons = consume_chars(lexer, ':');
  if (colons == 3) {
    lexer->result_symbol = CLOSE_PARAGRAPH;
    return true;
  } else {
    return false;
  }
}

bool tree_sitter_sdjot_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  if (valid_symbols[CLOSE_PARAGRAPH] && parse_close_paragraph(lexer)) {
    return true;
  }
  return false;
}

// If we need to allocate/deallocate state, we do it in these functions.
void *tree_sitter_sdjot_external_scanner_create() { return NULL; }
void tree_sitter_sdjot_external_scanner_destroy(void *payload) {}

// If we have state, we should load and save it in these functions.
unsigned tree_sitter_sdjot_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  return 0;
}
void tree_sitter_sdjot_external_scanner_deserialize(void *payload, char *buffer,
                                                    unsigned length) {}
