-- Load the gotmpl parser for helm with helm queries.
vim.treesitter.language.add("helm", {
  filetype = "helm",
  symbol_name = "gotmpl",
})
