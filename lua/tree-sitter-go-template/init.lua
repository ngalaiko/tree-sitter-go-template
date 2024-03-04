local M = {}

--- @param additional_langs string[]
local function configure_filetype(additional_langs)
  vim.filetype.add {
    extension = {
      gotmpl = "gotmpl"
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

M.setup = function(options)
  local additional_langs = options.additional_langs or { "helm" }

  configure_filetype(additional_langs)
end

return M
