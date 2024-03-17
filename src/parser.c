#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_code_block_marker = 2,
  aux_sym_code_token1 = 3,
  sym_language = 4,
  anon_sym__ = 5,
  sym__text = 6,
  sym__close_paragraph = 7,
  sym__block_close = 8,
  sym__div_marker_begin = 9,
  sym__div_marker_end = 10,
  sym__ignored = 11,
  sym_document = 12,
  sym__block = 13,
  sym_div = 14,
  sym_code_block = 15,
  sym_code = 16,
  sym_paragraph = 17,
  aux_sym__inline = 18,
  sym_emphasis = 19,
  sym__fallback = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_code_repeat1 = 22,
  aux_sym_paragraph_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_code_block_marker] = "code_block_marker",
  [aux_sym_code_token1] = "code_token1",
  [sym_language] = "language",
  [anon_sym__] = "_",
  [sym__text] = "_text",
  [sym__close_paragraph] = "_close_paragraph",
  [sym__block_close] = "_block_close",
  [sym__div_marker_begin] = "div_marker",
  [sym__div_marker_end] = "div_marker",
  [sym__ignored] = "_ignored",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_div] = "div",
  [sym_code_block] = "code_block",
  [sym_code] = "code",
  [sym_paragraph] = "paragraph",
  [aux_sym__inline] = "_inline",
  [sym_emphasis] = "emphasis",
  [sym__fallback] = "_fallback",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_code_block_marker] = sym_code_block_marker,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [sym_language] = sym_language,
  [anon_sym__] = anon_sym__,
  [sym__text] = sym__text,
  [sym__close_paragraph] = sym__close_paragraph,
  [sym__block_close] = sym__block_close,
  [sym__div_marker_begin] = sym__div_marker_begin,
  [sym__div_marker_end] = sym__div_marker_begin,
  [sym__ignored] = sym__ignored,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_div] = sym_div,
  [sym_code_block] = sym_code_block,
  [sym_code] = sym_code,
  [sym_paragraph] = sym_paragraph,
  [aux_sym__inline] = aux_sym__inline,
  [sym_emphasis] = sym_emphasis,
  [sym__fallback] = sym__fallback,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block_marker] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__close_paragraph] = {
    .visible = false,
    .named = true,
  },
  [sym__block_close] = {
    .visible = false,
    .named = true,
  },
  [sym__div_marker_begin] = {
    .visible = true,
    .named = true,
  },
  [sym__div_marker_end] = {
    .visible = true,
    .named = true,
  },
  [sym__ignored] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inline] = {
    .visible = false,
    .named = false,
  },
  [sym_emphasis] = {
    .visible = true,
    .named = true,
  },
  [sym__fallback] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 16,
  [25] = 18,
  [26] = 21,
  [27] = 27,
  [28] = 20,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 46,
  [49] = 44,
  [50] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '`') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_code_block_marker);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_code_block_marker);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_language);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 4},
  [10] = {.lex_state = 1, .external_lex_state = 4},
  [11] = {.lex_state = 1, .external_lex_state = 4},
  [12] = {.lex_state = 0, .external_lex_state = 5},
  [13] = {.lex_state = 0, .external_lex_state = 5},
  [14] = {.lex_state = 0, .external_lex_state = 6},
  [15] = {.lex_state = 0, .external_lex_state = 6},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1, .external_lex_state = 4},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_code_block_marker] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__close_paragraph] = ACTIONS(1),
    [sym__block_close] = ACTIONS(1),
    [sym__div_marker_begin] = ACTIONS(1),
    [sym__div_marker_end] = ACTIONS(1),
    [sym__ignored] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(42),
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_code_block] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_code_block_marker] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__div_marker_begin] = ACTIONS(13),
  },
  [2] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_code_block] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(15),
    [sym_code_block_marker] = ACTIONS(17),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__block_close] = ACTIONS(19),
    [sym__div_marker_begin] = ACTIONS(21),
  },
  [3] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_code_block] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(15),
    [sym_code_block_marker] = ACTIONS(17),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__block_close] = ACTIONS(23),
    [sym__div_marker_begin] = ACTIONS(21),
  },
  [4] = {
    [sym__block] = STATE(3),
    [sym_div] = STATE(3),
    [sym_code_block] = STATE(3),
    [sym_paragraph] = STATE(3),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(25),
    [sym_code_block_marker] = ACTIONS(17),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__block_close] = ACTIONS(27),
    [sym__div_marker_begin] = ACTIONS(21),
  },
  [5] = {
    [sym__block] = STATE(8),
    [sym_div] = STATE(8),
    [sym_code_block] = STATE(8),
    [sym_paragraph] = STATE(8),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(31),
    [sym_code_block_marker] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__div_marker_begin] = ACTIONS(13),
  },
  [6] = {
    [sym__block] = STATE(2),
    [sym_div] = STATE(2),
    [sym_code_block] = STATE(2),
    [sym_paragraph] = STATE(2),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(33),
    [sym_code_block_marker] = ACTIONS(17),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
    [sym__block_close] = ACTIONS(35),
    [sym__div_marker_begin] = ACTIONS(21),
  },
  [7] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_code_block] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(37),
    [sym_code_block_marker] = ACTIONS(40),
    [anon_sym__] = ACTIONS(43),
    [sym__text] = ACTIONS(46),
    [sym__block_close] = ACTIONS(49),
    [sym__div_marker_begin] = ACTIONS(51),
  },
  [8] = {
    [sym__block] = STATE(8),
    [sym_div] = STATE(8),
    [sym_code_block] = STATE(8),
    [sym_paragraph] = STATE(8),
    [aux_sym__inline] = STATE(22),
    [sym_emphasis] = STATE(22),
    [sym__fallback] = STATE(22),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_paragraph_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(54),
    [sym_code_block_marker] = ACTIONS(57),
    [anon_sym__] = ACTIONS(43),
    [sym__text] = ACTIONS(46),
    [sym__div_marker_begin] = ACTIONS(60),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym__close_paragraph,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [21] = 6,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 1,
      sym__close_paragraph,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [42] = 6,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym__text,
    ACTIONS(79), 1,
      sym__close_paragraph,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [63] = 3,
    ACTIONS(85), 1,
      sym__div_marker_end,
    ACTIONS(83), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [77] = 3,
    ACTIONS(91), 1,
      sym__div_marker_end,
    ACTIONS(89), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(87), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [91] = 3,
    ACTIONS(93), 1,
      sym__div_marker_end,
    ACTIONS(83), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [105] = 3,
    ACTIONS(95), 1,
      sym__div_marker_end,
    ACTIONS(89), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(87), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [119] = 2,
    ACTIONS(83), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [130] = 4,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      anon_sym__,
    ACTIONS(102), 1,
      sym__text,
    STATE(17), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [145] = 2,
    ACTIONS(105), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(107), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [156] = 2,
    ACTIONS(111), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(109), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [167] = 2,
    ACTIONS(115), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(113), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [178] = 2,
    ACTIONS(119), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(117), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [189] = 4,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      sym__text,
    STATE(17), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [204] = 4,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(131), 1,
      sym__text,
    STATE(30), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [219] = 2,
    ACTIONS(83), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [230] = 2,
    ACTIONS(105), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(107), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [241] = 2,
    ACTIONS(119), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(117), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [252] = 4,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym__,
    ACTIONS(140), 1,
      sym__text,
    STATE(30), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [267] = 2,
    ACTIONS(115), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(113), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [278] = 2,
    ACTIONS(111), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(109), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [289] = 3,
    ACTIONS(123), 1,
      sym__text,
    ACTIONS(143), 1,
      anon_sym__,
    STATE(17), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [301] = 2,
    ACTIONS(79), 1,
      sym__close_paragraph,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym__,
      sym__text,
  [310] = 3,
    ACTIONS(145), 1,
      sym_code_block_marker,
    ACTIONS(147), 1,
      aux_sym_code_token1,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [320] = 3,
    ACTIONS(150), 1,
      aux_sym_code_token1,
    STATE(36), 1,
      aux_sym_code_repeat1,
    STATE(49), 1,
      sym_code,
  [330] = 3,
    ACTIONS(150), 1,
      aux_sym_code_token1,
    STATE(36), 1,
      aux_sym_code_repeat1,
    STATE(44), 1,
      sym_code,
  [340] = 3,
    ACTIONS(150), 1,
      aux_sym_code_token1,
    STATE(36), 1,
      aux_sym_code_repeat1,
    STATE(47), 1,
      sym_code,
  [350] = 3,
    ACTIONS(152), 1,
      sym_code_block_marker,
    ACTIONS(154), 1,
      aux_sym_code_token1,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [360] = 3,
    ACTIONS(150), 1,
      aux_sym_code_token1,
    STATE(36), 1,
      aux_sym_code_repeat1,
    STATE(45), 1,
      sym_code,
  [370] = 2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      sym_language,
  [377] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      sym_language,
  [384] = 1,
    ACTIONS(145), 2,
      sym_code_block_marker,
      aux_sym_code_token1,
  [389] = 1,
    ACTIONS(164), 1,
      anon_sym_LF,
  [393] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [397] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [401] = 1,
    ACTIONS(170), 1,
      sym_code_block_marker,
  [405] = 1,
    ACTIONS(172), 1,
      sym_code_block_marker,
  [409] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [413] = 1,
    ACTIONS(176), 1,
      sym_code_block_marker,
  [417] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [421] = 1,
    ACTIONS(180), 1,
      sym_code_block_marker,
  [425] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 21,
  [SMALL_STATE(11)] = 42,
  [SMALL_STATE(12)] = 63,
  [SMALL_STATE(13)] = 77,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 105,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 130,
  [SMALL_STATE(18)] = 145,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 204,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 241,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 267,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 301,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 320,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 340,
  [SMALL_STATE(36)] = 350,
  [SMALL_STATE(37)] = 360,
  [SMALL_STATE(38)] = 370,
  [SMALL_STATE(39)] = 377,
  [SMALL_STATE(40)] = 384,
  [SMALL_STATE(41)] = 389,
  [SMALL_STATE(42)] = 393,
  [SMALL_STATE(43)] = 397,
  [SMALL_STATE(44)] = 401,
  [SMALL_STATE(45)] = 405,
  [SMALL_STATE(46)] = 409,
  [SMALL_STATE(47)] = 413,
  [SMALL_STATE(48)] = 417,
  [SMALL_STATE(49)] = 421,
  [SMALL_STATE(50)] = 425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(27),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3),
  [127] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__fallback, 1), REDUCE(sym_emphasis, 3), SHIFT(27),
  [131] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__fallback, 1), REDUCE(sym_emphasis, 3), SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fallback, 1),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__fallback, 1), SHIFT(27),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__fallback, 1), SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(43),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__close_paragraph = 0,
  ts_external_token__block_close = 1,
  ts_external_token__div_marker_begin = 2,
  ts_external_token__div_marker_end = 3,
  ts_external_token__ignored = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__close_paragraph] = sym__close_paragraph,
  [ts_external_token__block_close] = sym__block_close,
  [ts_external_token__div_marker_begin] = sym__div_marker_begin,
  [ts_external_token__div_marker_end] = sym__div_marker_end,
  [ts_external_token__ignored] = sym__ignored,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__close_paragraph] = true,
    [ts_external_token__block_close] = true,
    [ts_external_token__div_marker_begin] = true,
    [ts_external_token__div_marker_end] = true,
    [ts_external_token__ignored] = true,
  },
  [2] = {
    [ts_external_token__div_marker_begin] = true,
  },
  [3] = {
    [ts_external_token__block_close] = true,
    [ts_external_token__div_marker_begin] = true,
  },
  [4] = {
    [ts_external_token__close_paragraph] = true,
  },
  [5] = {
    [ts_external_token__block_close] = true,
    [ts_external_token__div_marker_begin] = true,
    [ts_external_token__div_marker_end] = true,
  },
  [6] = {
    [ts_external_token__div_marker_begin] = true,
    [ts_external_token__div_marker_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sdjot_external_scanner_create(void);
void tree_sitter_sdjot_external_scanner_destroy(void *);
bool tree_sitter_sdjot_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sdjot_external_scanner_serialize(void *, char *);
void tree_sitter_sdjot_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sdjot() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sdjot_external_scanner_create,
      tree_sitter_sdjot_external_scanner_destroy,
      tree_sitter_sdjot_external_scanner_scan,
      tree_sitter_sdjot_external_scanner_serialize,
      tree_sitter_sdjot_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
