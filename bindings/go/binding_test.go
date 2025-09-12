package tree_sitter_gotmpl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-gotmpl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gotmpl.Language())
	if language == nil {
		t.Errorf("Error loading Gotmpl grammar")
	}
}
