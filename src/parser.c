#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_div_marker = 2,
  aux_sym__inline_token1 = 3,
  anon_sym__ = 4,
  sym__close_paragraph = 5,
  sym_document = 6,
  sym__block = 7,
  sym_div = 8,
  sym_paragraph = 9,
  aux_sym__inline = 10,
  sym_emphasis = 11,
  aux_sym_document_repeat1 = 12,
  aux_sym_paragraph_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_div_marker] = "div_marker",
  [aux_sym__inline_token1] = "_inline_token1",
  [anon_sym__] = "_",
  [sym__close_paragraph] = "_close_paragraph",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_div] = "div",
  [sym_paragraph] = "paragraph",
  [aux_sym__inline] = "_inline",
  [sym_emphasis] = "emphasis",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_div_marker] = sym_div_marker,
  [aux_sym__inline_token1] = aux_sym__inline_token1,
  [anon_sym__] = anon_sym__,
  [sym__close_paragraph] = sym__close_paragraph,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_div] = sym_div,
  [sym_paragraph] = sym_paragraph,
  [aux_sym__inline] = aux_sym__inline,
  [sym_emphasis] = sym_emphasis,
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
  [aux_sym__inline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__close_paragraph] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
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
      ACCEPT_TOKEN(aux_sym__inline_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__inline_token1);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__inline_token1);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__inline_token1);
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym__);
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
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
};

enum {
  ts_external_token__close_paragraph = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__close_paragraph] = sym__close_paragraph,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__close_paragraph] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_div_marker] = ACTIONS(1),
    [aux_sym__inline_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__close_paragraph] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(19),
    [sym__block] = STATE(4),
    [sym_div] = STATE(4),
    [sym_paragraph] = STATE(4),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_div_marker] = ACTIONS(7),
    [aux_sym__inline_token1] = ACTIONS(9),
    [anon_sym__] = ACTIONS(11),
  },
  [2] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [sym_div_marker] = ACTIONS(15),
    [aux_sym__inline_token1] = ACTIONS(15),
    [anon_sym__] = ACTIONS(15),
  },
  [3] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [sym_div_marker] = ACTIONS(19),
    [aux_sym__inline_token1] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
  },
  [4] = {
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [sym_div_marker] = ACTIONS(7),
    [aux_sym__inline_token1] = ACTIONS(9),
    [anon_sym__] = ACTIONS(11),
  },
  [5] = {
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [sym_div_marker] = ACTIONS(30),
    [aux_sym__inline_token1] = ACTIONS(33),
    [anon_sym__] = ACTIONS(36),
  },
  [6] = {
    [sym__block] = STATE(7),
    [sym_div] = STATE(7),
    [sym_paragraph] = STATE(7),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(39),
    [sym_div_marker] = ACTIONS(41),
    [aux_sym__inline_token1] = ACTIONS(9),
    [anon_sym__] = ACTIONS(11),
  },
  [7] = {
    [sym__block] = STATE(5),
    [sym_div] = STATE(5),
    [sym_paragraph] = STATE(5),
    [aux_sym__inline] = STATE(11),
    [sym_emphasis] = STATE(11),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(23),
    [sym_div_marker] = ACTIONS(43),
    [aux_sym__inline_token1] = ACTIONS(9),
    [anon_sym__] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      aux_sym__inline_token1,
    ACTIONS(50), 1,
      anon_sym__,
    ACTIONS(53), 1,
      sym__close_paragraph,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(11), 2,
      aux_sym__inline,
      sym_emphasis,
  [20] = 6,
    ACTIONS(9), 1,
      aux_sym__inline_token1,
    ACTIONS(11), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      sym__close_paragraph,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(11), 2,
      aux_sym__inline,
      sym_emphasis,
  [40] = 2,
    STATE(15), 2,
      aux_sym__inline,
      sym_emphasis,
    ACTIONS(59), 3,
      anon_sym_LF,
      aux_sym__inline_token1,
      anon_sym__,
  [50] = 4,
    ACTIONS(11), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      aux_sym__inline_token1,
    STATE(12), 2,
      aux_sym__inline,
      sym_emphasis,
  [64] = 4,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      aux_sym__inline_token1,
    ACTIONS(70), 1,
      anon_sym__,
    STATE(12), 2,
      aux_sym__inline,
      sym_emphasis,
  [78] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 4,
      anon_sym_LF,
      sym_div_marker,
      aux_sym__inline_token1,
      anon_sym__,
  [88] = 2,
    ACTIONS(53), 1,
      sym__close_paragraph,
    ACTIONS(45), 3,
      anon_sym_LF,
      aux_sym__inline_token1,
      anon_sym__,
  [97] = 3,
    ACTIONS(63), 1,
      aux_sym__inline_token1,
    ACTIONS(77), 1,
      anon_sym__,
    STATE(12), 2,
      aux_sym__inline,
      sym_emphasis,
  [108] = 3,
    ACTIONS(11), 1,
      anon_sym__,
    ACTIONS(79), 1,
      aux_sym__inline_token1,
    STATE(15), 2,
      aux_sym__inline,
      sym_emphasis,
  [119] = 1,
    ACTIONS(81), 1,
      anon_sym_LF,
  [123] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [127] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [131] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 20,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 88,
  [SMALL_STATE(15)] = 97,
  [SMALL_STATE(16)] = 108,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 123,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 5),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(12),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
