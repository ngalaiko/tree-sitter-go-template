local M = {}

M.setup = function(options)
  vim.filetype.add {
    extension = {
      gotmpl = "gotmpl",
    },
    pattern = {
      [".*/templates/.*%.tpl"] = "helm",
      [".*/templates/.*%.yaml"] = "helm",
      ["helmfile.*%.yaml"] = "helm",
    },
  }

  local path = debug.getinfo(1).source:sub(2):match("(.*[/\\])") or "./"

  local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

  for _, lang in ipairs { "gotmpl", "helm" } do
    parser_config[lang] = {
      install_info = {
        url = path .. "../..",
        files = { "src/parser.c" },
      },
    }
  end
end

return M
