package tree_sitter_gotemplate_test

import (
	"testing"

	"github.com/ngalaiko/tree-sitter-go-template/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gotemplate.Language())
	if language == nil {
		t.Errorf("Error loading gotemplate grammar")
	}

	parser := tree_sitter.NewParser()
	defer parser.Close()
	parser.SetLanguage(language)

	tree := parser.Parse([]byte("{{ nil }}"), nil)
	if tree == nil {
		t.Errorf("Error parsing code")
	}
	defer tree.Close()

	root := tree.RootNode()
	if root == nil {
		t.Errorf("Error parsing code")
	}

	if root.ToSexp() != "(template (nil))" {
		t.Errorf("Unexpected tree: %s", root.ToSexp())
	}
}
