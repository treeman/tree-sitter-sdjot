#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_div_marker = 2,
  anon_sym__ = 3,
  sym__text = 4,
  sym__close_paragraph = 5,
  sym__close_block = 6,
  sym_div_end = 7,
  sym_div_begin = 8,
  sym_document = 9,
  sym__block = 10,
  sym_div = 11,
  sym_paragraph = 12,
  aux_sym__inline = 13,
  sym_emphasis = 14,
  sym__emphasis_begin = 15,
  sym__emphasis_end = 16,
  sym__fallback = 17,
  aux_sym_document_repeat1 = 18,
  aux_sym_paragraph_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_div_marker] = "div_marker",
  [anon_sym__] = "_",
  [sym__text] = "_text",
  [sym__close_paragraph] = "_close_paragraph",
  [sym__close_block] = "_close_block",
  [sym_div_end] = "div_end",
  [sym_div_begin] = "div_begin",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_div] = "div",
  [sym_paragraph] = "paragraph",
  [aux_sym__inline] = "_inline",
  [sym_emphasis] = "emphasis",
  [sym__emphasis_begin] = "_emphasis_begin",
  [sym__emphasis_end] = "_emphasis_end",
  [sym__fallback] = "_fallback",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_div_marker] = sym_div_marker,
  [anon_sym__] = anon_sym__,
  [sym__text] = sym__text,
  [sym__close_paragraph] = sym__close_paragraph,
  [sym__close_block] = sym__close_block,
  [sym_div_end] = sym_div_end,
  [sym_div_begin] = sym_div_begin,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_div] = sym_div,
  [sym_paragraph] = sym_paragraph,
  [aux_sym__inline] = aux_sym__inline,
  [sym_emphasis] = sym_emphasis,
  [sym__emphasis_begin] = sym__emphasis_begin,
  [sym__emphasis_end] = sym__emphasis_end,
  [sym__fallback] = sym__fallback,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
  [sym_div_marker] = {
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
  [sym__close_block] = {
    .visible = false,
    .named = true,
  },
  [sym_div_end] = {
    .visible = true,
    .named = true,
  },
  [sym_div_begin] = {
    .visible = true,
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
  [sym__emphasis_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__emphasis_end] = {
    .visible = false,
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_div_marker);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__text);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_div_marker] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__close_paragraph] = ACTIONS(1),
    [sym__close_block] = ACTIONS(1),
    [sym_div_end] = ACTIONS(1),
    [sym_div_begin] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(20),
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_div_marker] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym_div] = STATE(2),
    [sym_paragraph] = STATE(2),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [sym_div_marker] = ACTIONS(18),
    [anon_sym__] = ACTIONS(21),
    [sym__text] = ACTIONS(24),
  },
  [3] = {
    [sym__block] = STATE(6),
    [sym_div] = STATE(6),
    [sym_paragraph] = STATE(6),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [sym_div_marker] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [sym__text] = ACTIONS(29),
  },
  [4] = {
    [sym__block] = STATE(6),
    [sym_div] = STATE(6),
    [sym_paragraph] = STATE(6),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [sym_div_marker] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [sym__text] = ACTIONS(33),
  },
  [5] = {
    [sym__block] = STATE(2),
    [sym_div] = STATE(2),
    [sym_paragraph] = STATE(2),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(37),
    [sym_div_marker] = ACTIONS(7),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [6] = {
    [sym__block] = STATE(2),
    [sym_div] = STATE(2),
    [sym_paragraph] = STATE(2),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(37),
    [sym_div_marker] = ACTIONS(39),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [7] = {
    [sym__block] = STATE(6),
    [sym_div] = STATE(6),
    [sym_paragraph] = STATE(6),
    [aux_sym__inline] = STATE(10),
    [sym_emphasis] = STATE(10),
    [sym__emphasis_begin] = STATE(13),
    [sym__fallback] = STATE(10),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(41),
    [sym_div_marker] = ACTIONS(43),
    [anon_sym__] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(50), 1,
      sym__text,
    ACTIONS(53), 1,
      sym__close_paragraph,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(10), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [24] = 7,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      sym__close_paragraph,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(10), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [48] = 5,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      sym__text,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(11), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [66] = 5,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym__,
    ACTIONS(68), 1,
      sym__text,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(11), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [84] = 5,
    ACTIONS(61), 1,
      sym__text,
    ACTIONS(71), 1,
      anon_sym__,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(16), 1,
      sym__emphasis_end,
    STATE(11), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [102] = 4,
    ACTIONS(9), 1,
      anon_sym__,
    ACTIONS(73), 1,
      sym__text,
    STATE(13), 1,
      sym__emphasis_begin,
    STATE(12), 3,
      aux_sym__inline,
      sym_emphasis,
      sym__fallback,
  [117] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 4,
      anon_sym_LF,
      sym_div_marker,
      anon_sym__,
      sym__text,
  [127] = 2,
    ACTIONS(53), 1,
      sym__close_paragraph,
    ACTIONS(45), 3,
      anon_sym_LF,
      anon_sym__,
      sym__text,
  [136] = 1,
    ACTIONS(79), 3,
      anon_sym_LF,
      anon_sym__,
      sym__text,
  [142] = 2,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 2,
      anon_sym__,
      sym__text,
  [150] = 1,
    ACTIONS(86), 1,
      anon_sym_LF,
  [154] = 1,
    ACTIONS(88), 1,
      anon_sym_LF,
  [158] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 127,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 154,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 162,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(17),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fallback, 1),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__emphasis_begin, 1, .dynamic_precedence = 100), REDUCE(sym__fallback, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__close_paragraph = 0,
  ts_external_token__close_block = 1,
  ts_external_token_div_end = 2,
  ts_external_token_div_begin = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__close_paragraph] = sym__close_paragraph,
  [ts_external_token__close_block] = sym__close_block,
  [ts_external_token_div_end] = sym_div_end,
  [ts_external_token_div_begin] = sym_div_begin,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__close_paragraph] = true,
    [ts_external_token__close_block] = true,
    [ts_external_token_div_end] = true,
    [ts_external_token_div_begin] = true,
  },
  [2] = {
    [ts_external_token__close_paragraph] = true,
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
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sdjot(void) {
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
