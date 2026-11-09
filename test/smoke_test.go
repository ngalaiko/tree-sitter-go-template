package test

import (
	"os"
	"path/filepath"
	"strings"
	"testing"

	"github.com/ngalaiko/tree-sitter-go-template/bindings/go"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

var SMOKE_TESTS_DIR = "./smoke_testdata"

func TestSmoke(t *testing.T) {
	filepath.Walk(SMOKE_TESTS_DIR, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if info.IsDir() && info.Name() == "templates" {
			err := filepath.Walk(path, func(path string, info os.FileInfo, err error) error {
				if err != nil {
					return err
				}
				if !info.IsDir() {
					t.Run(path, func(t *testing.T) {
						content, err := os.ReadFile(path)
						if err != nil {
							t.Fatal(err)
						}
						testTemplateForErrors(t, content)
					})
				}
				return nil
			})
			if err != nil {
				return err
			}
		}
		return nil
	})
}

func testTemplateForErrors(t *testing.T, input []byte) {
	t.Helper()

	language := tree_sitter.NewLanguage(tree_sitter_gotemplate.Language())
	if language == nil {
		t.Errorf("Error loading gotemplate grammar")
	}

	parser := tree_sitter.NewParser()
	defer parser.Close()
	parser.SetLanguage(language)

	tree := parser.Parse(input, nil)
	if tree == nil {
		t.Errorf("Error parsing code")
	}
	defer tree.Close()

	root := tree.RootNode()
	if root == nil {
		t.Errorf("Error parsing code")
	}

	sexp := root.ToSexp()

	if strings.Contains(sexp, "(ERROR") {
		t.Errorf("Unexpected (ERROR) in tree: %s", root.ToSexp())
	}

	if strings.Contains(sexp, "(MISSING") {
		t.Errorf("Unexpected (MISSING) in tree: %s", root.ToSexp())
	}
}
