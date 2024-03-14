module.exports = grammar({
  name: "sdjot",

  // Skip carriage returns.
  // We could skip spaces here as well, but the actual markup language
  // has significant spaces in some places, so let's remove them here too.
  extras: (_) => ["\r"],

  conflicts: ($) => [[$._emphasis_begin, $._fallback]],

  rules: {
    document: ($) => repeat($._block),

    // All blocks should end with a newline, but we can also eat newlines directly.
    _block: ($) => choice($.div, $.paragraph, "\n"),

    // A div contains other blocks.
    div: ($) =>
      prec.left(
        seq(
          alias($._div_marker_begin, $.div_marker),
          "\n",
          repeat($._block),
          $._block_close,
          optional(alias($._div_marker_end, $.div_marker))
        )
      ),

    // A paragraph contains inline content and is terminated by a blankline
    // (two newlines in a row).
    paragraph: ($) =>
      seq(repeat1(seq($._inline, "\n")), choice("\n", $._close_paragraph)),

    // The markup parser could separate block and inline parsing into separate steps,
    // but we'll do everything in one parser.
    _inline: ($) => repeat1(choice($.emphasis, $._text, $._fallback)),
    emphasis: ($) => seq($._emphasis_begin, $._inline, $._emphasis_end),
    _emphasis_begin: (_) => "_",
    _emphasis_end: (_) => prec(1000, "_"),
    _fallback: (_) => prec.dynamic(-100, "_"),
    _text: (_) => /[^\n]/,
  },

  externals: ($) => [
    $._close_paragraph,
    $._block_close,
    $._div_marker_begin,
    $._div_marker_end,

    $._ignored,
  ],
});
