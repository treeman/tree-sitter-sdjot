#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
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
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 20,
  [29] = 24,
  [30] = 22,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 50,
  [52] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
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
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_language);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 19:
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
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 1, .external_lex_state = 4},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
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
    [sym_document] = STATE(46),
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_code_block] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    [aux_sym__inline] = STATE(27),
    [sym_emphasis] = STATE(27),
    [sym__fallback] = STATE(27),
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
    STATE(27), 3,
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
    STATE(27), 3,
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
    STATE(27), 3,
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
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [130] = 2,
    ACTIONS(99), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(97), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [141] = 4,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(106), 1,
      sym__text,
    STATE(18), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [156] = 2,
    ACTIONS(99), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(97), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [167] = 2,
    ACTIONS(109), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(111), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [178] = 4,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym__,
    ACTIONS(118), 1,
      sym__text,
    STATE(32), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [193] = 2,
    ACTIONS(123), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(121), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [204] = 2,
    ACTIONS(127), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(125), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [215] = 2,
    ACTIONS(131), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(129), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [226] = 4,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(139), 1,
      sym__text,
    STATE(32), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [241] = 2,
    ACTIONS(83), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(81), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [252] = 4,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      sym__text,
    STATE(18), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [267] = 2,
    ACTIONS(109), 2,
      sym__block_close,
      sym__div_marker_begin,
    ACTIONS(111), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [278] = 2,
    ACTIONS(131), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(129), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [289] = 2,
    ACTIONS(123), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [300] = 2,
    ACTIONS(127), 2,
      sym__div_marker_begin,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_LF,
      sym_code_block_marker,
      anon_sym__,
      sym__text,
  [311] = 3,
    ACTIONS(145), 1,
      sym__text,
    ACTIONS(147), 1,
      anon_sym__,
    STATE(18), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [323] = 4,
    ACTIONS(149), 1,
      sym_code_block_marker,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    STATE(39), 1,
      aux_sym_code_repeat1,
    STATE(47), 1,
      sym_code,
  [336] = 2,
    ACTIONS(79), 1,
      sym__close_paragraph,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym__,
      sym__text,
  [345] = 4,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    ACTIONS(153), 1,
      sym_code_block_marker,
    STATE(39), 1,
      aux_sym_code_repeat1,
    STATE(43), 1,
      sym_code,
  [358] = 4,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    ACTIONS(155), 1,
      sym_code_block_marker,
    STATE(39), 1,
      aux_sym_code_repeat1,
    STATE(49), 1,
      sym_code,
  [371] = 4,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    ACTIONS(157), 1,
      sym_code_block_marker,
    STATE(39), 1,
      aux_sym_code_repeat1,
    STATE(48), 1,
      sym_code,
  [384] = 3,
    ACTIONS(159), 1,
      sym_code_block_marker,
    ACTIONS(161), 1,
      aux_sym_code_token1,
    STATE(38), 1,
      aux_sym_code_repeat1,
  [394] = 3,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    ACTIONS(164), 1,
      sym_code_block_marker,
    STATE(38), 1,
      aux_sym_code_repeat1,
  [404] = 2,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      sym_language,
  [411] = 1,
    ACTIONS(159), 2,
      sym_code_block_marker,
      aux_sym_code_token1,
  [416] = 2,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      sym_language,
  [423] = 1,
    ACTIONS(174), 1,
      sym_code_block_marker,
  [427] = 1,
    ACTIONS(176), 1,
      anon_sym_LF,
  [431] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [435] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [439] = 1,
    ACTIONS(182), 1,
      sym_code_block_marker,
  [443] = 1,
    ACTIONS(184), 1,
      sym_code_block_marker,
  [447] = 1,
    ACTIONS(186), 1,
      sym_code_block_marker,
  [451] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [455] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [459] = 1,
    ACTIONS(192), 1,
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
  [SMALL_STATE(18)] = 141,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 193,
  [SMALL_STATE(23)] = 204,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 241,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 267,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 289,
  [SMALL_STATE(31)] = 300,
  [SMALL_STATE(32)] = 311,
  [SMALL_STATE(33)] = 323,
  [SMALL_STATE(34)] = 336,
  [SMALL_STATE(35)] = 345,
  [SMALL_STATE(36)] = 358,
  [SMALL_STATE(37)] = 371,
  [SMALL_STATE(38)] = 384,
  [SMALL_STATE(39)] = 394,
  [SMALL_STATE(40)] = 404,
  [SMALL_STATE(41)] = 411,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 423,
  [SMALL_STATE(44)] = 427,
  [SMALL_STATE(45)] = 431,
  [SMALL_STATE(46)] = 435,
  [SMALL_STATE(47)] = 439,
  [SMALL_STATE(48)] = 443,
  [SMALL_STATE(49)] = 447,
  [SMALL_STATE(50)] = 451,
  [SMALL_STATE(51)] = 455,
  [SMALL_STATE(52)] = 459,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(21),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fallback, 1),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__fallback, 1), SHIFT(21),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__fallback, 1), SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3),
  [135] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__fallback, 1), REDUCE(sym_emphasis, 3), SHIFT(21),
  [139] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__fallback, 1), REDUCE(sym_emphasis, 3), SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(44),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
