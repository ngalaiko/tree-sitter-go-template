local M = {}

local lang_name = "gotmpl"

local known_additional_langs = {
  "helm",
}

local path = debug.getinfo(1).source:sub(2):match "(.*[/\\])" or "./"
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

--- @param additional_langs string[]
local function configure_filetype(additional_langs)
  vim.filetype.add {
    extension = {
      [lang_name] = lang_name
    },
  }

  if vim.tbl_contains(additional_langs, "helm") then
    vim.filetype.add {
      pattern = {
        [".*/templates/.*%.tpl"] = "helm",
        [".*/templates/.*%.yaml"] = "helm",
        ["helmfile.*%.yaml"] = "helm",
      },
    }
  end
end

local function register_and_install_gotmpl()
  parser_config[lang_name] = {
    install_info = {
      url = path .. "../..",
      files = { "src/parser.c" },
    },
  }

  require("nvim-treesitter.install").ensure_installed_sync(lang_name)
end

--- @param additional_langs string[]
local function register_and_install_additional(additional_langs)
  local unknown_langs = {}

  local langs_to_install = vim.tbl_filter(function(l)
    local is_known = vim.tbl_contains(known_additional_langs, l)

    if not is_known then
      table.insert(unknown_langs, l)
    end

    return is_known
  end, additional_langs)

  if not vim.tbl_isempty(unknown_langs) then
    vim.notify(
      "Unknown languages: "
        .. table.concat(unknown_langs, ", ", 1, #unknown_langs),
      vim.log.levels.WARN,
      { title = "tree-sitter-go-template" }
    )
  end

  for _, lang in ipairs(langs_to_install) do
    parser_config[lang] = {
      install_info = {
        url = path .. "../..",
        files = { "src/parser.c" },
      },
    }
  end

  if not vim.tbl_isempty(langs_to_install) then
    require("nvim-treesitter.install").ensure_installed(langs_to_install)
  end
end

M.setup = function(options)
  local additional_langs = options.additional_langs or { "helm" }

  configure_filetype(additional_langs)
  register_and_install_gotmpl()
  register_and_install_additional(additional_langs)
end

return M
