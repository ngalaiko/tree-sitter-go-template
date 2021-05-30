#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 7

enum {
  sym_text = 1,
  anon_sym_if = 2,
  anon_sym_elseif = 3,
  anon_sym_else = 4,
  anon_sym_end = 5,
  sym_pipeline_stub = 6,
  sym_comment = 7,
  anon_sym_LBRACE_LBRACE = 8,
  anon_sym_DASH = 9,
  anon_sym_DASH2 = 10,
  anon_sym_RBRACE_RBRACE = 11,
  sym_template = 12,
  sym__block = 13,
  sym__action = 14,
  sym__comment_action = 15,
  sym__pipeline_action = 16,
  sym_if_action = 17,
  sym__pipeline = 18,
  sym__left_delimiter = 19,
  sym__right_delimiter = 20,
  aux_sym_template_repeat1 = 21,
  aux_sym_if_action_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [sym_pipeline_stub] = "pipeline_stub",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_DASH] = "- ",
  [anon_sym_DASH2] = " -",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym__action] = "_action",
  [sym__comment_action] = "_comment_action",
  [sym__pipeline_action] = "_pipeline_action",
  [sym_if_action] = "if_action",
  [sym__pipeline] = "_pipeline",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_if_action_repeat1] = "if_action_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [sym_pipeline_stub] = sym_pipeline_stub,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH2] = anon_sym_DASH2,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym__action] = sym__action,
  [sym__comment_action] = sym__comment_action,
  [sym__pipeline_action] = sym__pipeline_action,
  [sym_if_action] = sym_if_action,
  [sym__pipeline] = sym__pipeline,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_if_action_repeat1] = aux_sym_if_action_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_pipeline_stub] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_action] = {
    .visible = false,
    .named = true,
  },
  [sym__pipeline_action] = {
    .visible = false,
    .named = true,
  },
  [sym_if_action] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline] = {
    .visible = false,
    .named = true,
  },
  [sym__left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__right_delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_action_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
  field_option = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_option] = "option",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 2},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 2},
  [5] = {.index = 12, .length = 3},
  [6] = {.index = 15, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [4] =
    {field_condition, 2},
    {field_consequence, 4},
  [6] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [10] =
    {field_condition, 2},
    {field_option, 4},
  [12] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [15] =
    {field_alternative, 9},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_pipeline_stub);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_pipeline_stub] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(71),
    [sym__block] = STATE(2),
    [sym__action] = STATE(2),
    [sym__comment_action] = STATE(2),
    [sym__pipeline_action] = STATE(2),
    [sym_if_action] = STATE(2),
    [sym__left_delimiter] = STATE(27),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(4), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [21] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(20), 1,
      sym__left_delimiter,
    STATE(50), 1,
      aux_sym_if_action_repeat1,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [42] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(20), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(4), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [63] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(54), 1,
      aux_sym_if_action_repeat1,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [84] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(23), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(13), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [102] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(10), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [120] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(11), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [138] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(3), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [156] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(24), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [174] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(25), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [192] = 4,
    ACTIONS(20), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [210] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(23), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [228] = 4,
    ACTIONS(13), 1,
      sym_text,
    ACTIONS(34), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [246] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(36), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(18), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [264] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(38), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(14), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [282] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(40), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(5), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [300] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      sym_text,
    STATE(26), 1,
      sym__left_delimiter,
    STATE(12), 6,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      aux_sym_template_repeat1,
  [318] = 7,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_elseif,
    ACTIONS(46), 1,
      anon_sym_else,
    ACTIONS(48), 1,
      anon_sym_end,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    STATE(56), 1,
      sym__pipeline,
  [340] = 7,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_elseif,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_else,
    ACTIONS(56), 1,
      anon_sym_end,
    STATE(56), 1,
      sym__pipeline,
  [362] = 3,
    ACTIONS(60), 1,
      anon_sym_else,
    ACTIONS(62), 1,
      anon_sym_DASH,
    ACTIONS(58), 5,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      sym_pipeline_stub,
      sym_comment,
  [376] = 2,
    ACTIONS(66), 1,
      anon_sym_else,
    ACTIONS(64), 5,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      sym_pipeline_stub,
      sym_comment,
  [387] = 5,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_end,
    STATE(56), 1,
      sym__pipeline,
  [403] = 5,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_end,
    STATE(56), 1,
      sym__pipeline,
  [419] = 5,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_end,
    STATE(56), 1,
      sym__pipeline,
  [435] = 5,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_end,
    STATE(56), 1,
      sym__pipeline,
  [451] = 4,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      sym_pipeline_stub,
    ACTIONS(80), 1,
      sym_comment,
    STATE(30), 1,
      sym__pipeline,
  [464] = 4,
    ACTIONS(42), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_pipeline_stub,
    ACTIONS(52), 1,
      sym_comment,
    STATE(56), 1,
      sym__pipeline,
  [477] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(84), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(38), 1,
      sym__right_delimiter,
  [487] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(86), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(45), 1,
      sym__right_delimiter,
  [497] = 3,
    ACTIONS(44), 1,
      anon_sym_elseif,
    ACTIONS(88), 1,
      anon_sym_else,
    ACTIONS(90), 1,
      anon_sym_end,
  [507] = 3,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 1,
      aux_sym_if_action_repeat1,
    STATE(72), 1,
      sym__left_delimiter,
  [517] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(97), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(16), 1,
      sym__right_delimiter,
  [527] = 2,
    ACTIONS(101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_text,
  [535] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(103), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(6), 1,
      sym__right_delimiter,
  [545] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(105), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym__right_delimiter,
  [555] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(107), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      sym__right_delimiter,
  [565] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_text,
  [573] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(113), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(40), 1,
      sym__right_delimiter,
  [583] = 2,
    ACTIONS(117), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_text,
  [591] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(119), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(42), 1,
      sym__right_delimiter,
  [601] = 2,
    ACTIONS(123), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_text,
  [609] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(125), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      sym__right_delimiter,
  [619] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(127), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(9), 1,
      sym__right_delimiter,
  [629] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_text,
  [637] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_text,
  [645] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(137), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      sym__right_delimiter,
  [655] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(139), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(58), 1,
      sym__right_delimiter,
  [665] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(141), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(63), 1,
      sym__right_delimiter,
  [675] = 3,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 1,
      aux_sym_if_action_repeat1,
    STATE(59), 1,
      sym__left_delimiter,
  [685] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(145), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(62), 1,
      sym__right_delimiter,
  [695] = 3,
    ACTIONS(82), 1,
      anon_sym_DASH2,
    ACTIONS(147), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(34), 1,
      sym__right_delimiter,
  [705] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(149), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(61), 1,
      sym__right_delimiter,
  [715] = 3,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 1,
      sym__left_delimiter,
    STATE(32), 1,
      aux_sym_if_action_repeat1,
  [725] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(151), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(68), 1,
      sym__right_delimiter,
  [735] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(153), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(67), 1,
      sym__right_delimiter,
  [745] = 3,
    ACTIONS(95), 1,
      anon_sym_DASH2,
    ACTIONS(155), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(15), 1,
      sym__right_delimiter,
  [755] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym_text,
  [763] = 3,
    ACTIONS(44), 1,
      anon_sym_elseif,
    ACTIONS(161), 1,
      anon_sym_else,
    ACTIONS(163), 1,
      anon_sym_end,
  [773] = 2,
    ACTIONS(165), 1,
      sym_pipeline_stub,
    STATE(33), 1,
      sym__pipeline,
  [780] = 2,
    ACTIONS(121), 1,
      sym_text,
    ACTIONS(123), 1,
      anon_sym_LBRACE_LBRACE,
  [787] = 2,
    ACTIONS(115), 1,
      sym_text,
    ACTIONS(117), 1,
      anon_sym_LBRACE_LBRACE,
  [794] = 2,
    ACTIONS(109), 1,
      sym_text,
    ACTIONS(111), 1,
      anon_sym_LBRACE_LBRACE,
  [801] = 2,
    ACTIONS(99), 1,
      sym_text,
    ACTIONS(101), 1,
      anon_sym_LBRACE_LBRACE,
  [808] = 2,
    ACTIONS(167), 1,
      sym_pipeline_stub,
    STATE(43), 1,
      sym__pipeline,
  [815] = 2,
    ACTIONS(133), 1,
      sym_text,
    ACTIONS(135), 1,
      anon_sym_LBRACE_LBRACE,
  [822] = 2,
    ACTIONS(129), 1,
      sym_text,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
  [829] = 2,
    ACTIONS(157), 1,
      sym_text,
    ACTIONS(159), 1,
      anon_sym_LBRACE_LBRACE,
  [836] = 2,
    ACTIONS(169), 1,
      sym_pipeline_stub,
    STATE(44), 1,
      sym__pipeline,
  [843] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
  [847] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [851] = 1,
    ACTIONS(44), 1,
      anon_sym_elseif,
  [855] = 1,
    ACTIONS(175), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 318,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 419,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 477,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 497,
  [SMALL_STATE(32)] = 507,
  [SMALL_STATE(33)] = 517,
  [SMALL_STATE(34)] = 527,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 545,
  [SMALL_STATE(37)] = 555,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 573,
  [SMALL_STATE(40)] = 583,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 601,
  [SMALL_STATE(43)] = 609,
  [SMALL_STATE(44)] = 619,
  [SMALL_STATE(45)] = 629,
  [SMALL_STATE(46)] = 637,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 655,
  [SMALL_STATE(49)] = 665,
  [SMALL_STATE(50)] = 675,
  [SMALL_STATE(51)] = 685,
  [SMALL_STATE(52)] = 695,
  [SMALL_STATE(53)] = 705,
  [SMALL_STATE(54)] = 715,
  [SMALL_STATE(55)] = 725,
  [SMALL_STATE(56)] = 735,
  [SMALL_STATE(57)] = 745,
  [SMALL_STATE(58)] = 755,
  [SMALL_STATE(59)] = 763,
  [SMALL_STATE(60)] = 773,
  [SMALL_STATE(61)] = 780,
  [SMALL_STATE(62)] = 787,
  [SMALL_STATE(63)] = 794,
  [SMALL_STATE(64)] = 801,
  [SMALL_STATE(65)] = 808,
  [SMALL_STATE(66)] = 815,
  [SMALL_STATE(67)] = 822,
  [SMALL_STATE(68)] = 829,
  [SMALL_STATE(69)] = 836,
  [SMALL_STATE(70)] = 843,
  [SMALL_STATE(71)] = 847,
  [SMALL_STATE(72)] = 851,
  [SMALL_STATE(73)] = 855,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 1), SHIFT_REPEAT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_delimiter, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_delimiter, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gotmpl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
