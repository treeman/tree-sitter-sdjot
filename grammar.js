module.exports = grammar({
  name: "sdjot",

  // Skip carriage returns.
  // We could skip spaces here as well, but the actual markup language
  // has significant spaces in some places, so let's remove them here too.
  extras: (_) => ["\r"],

  rules: {
    document: ($) => repeat($._block),

    // All blocks should end with a newline, but we can also eat newlines directly.
    _block: ($) => choice($.div, $.paragraph, "\n"),

    // A div contains other blocks.
    div: ($) =>
      prec.left(seq($.div_marker, "\n", repeat($._block), $.div_marker, "\n")),
    div_marker: (_) => ":::",

    // A paragraph contains inline content and is terminated by a blankline
    // (two newlines in a row).
    paragraph: ($) =>
      seq(repeat1(seq($._inline, "\n")), choice("\n", $._close_paragraph)),

    // The markup parser could separate block and inline parsing into separate steps,
    // but we'll do everything in one parser.
    _inline: ($) => repeat1(choice($.emphasis, /[^\n]/)),
    emphasis: ($) => prec.left(seq("_", $._inline, "_")),
  },

  externals: ($) => [$._close_paragraph],
});
