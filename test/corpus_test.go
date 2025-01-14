package test

import (
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"testing"
	"text/template"
)

var (
	TESTCASE_SEPERATOR      = regexp.MustCompile("(?m)^(=+)$")
	INPUT_OUTPUT_SEPERATOR  = regexp.MustCompile("\n(---)\n")
	TRIM_TESTCASE_SEPERATOR = regexp.MustCompile("^(=+)\n")
	TESTS_DIR               = "./corpus"
)

func TestCorpus(t *testing.T) {
	testCases, err := getTestCases()
	if err != nil {
		t.Fatal(err)
	}

	fmt.Printf("Got %d test cases\n", len(testCases))

	for _, testCase := range testCases {
		t.Run(testCase.name, func(t *testing.T) {
			testTemplate(t, testCase.input, testCase.isError)
		})
	}
}

func testTemplate(t *testing.T, input string, isError bool) {
	t.Helper()

	input = fmt.Sprintf("{{ $var := 1}} \n %s", input)
	_, err := template.New("template").Funcs(
		template.FuncMap{
			"pipeline":     func() string { return "" },
			"functionName": func() string { return "" },
			"condition":    func() string { return "" },
		},
	).Parse(input)

	if err != nil && !isError {
		t.Fatal(err)
	} else if err == nil && isError {
		t.Fatal("expected error")
	}
}

type TestCase struct {
	file        string
	name        string
	input       string
	sExpression string
	isError     bool
}

func NewTestCase(file, name, input, sExpression string) TestCase {
	return TestCase{
		name:        fmt.Sprintf("%s: %s", file, name),
		input:       input,
		sExpression: sExpression,
		isError:     strings.Contains(sExpression, "(ERROR"),
	}
}

func getTestCasesForFile(filename string, content string) []TestCase {
	testCases := []TestCase{}
	partsWithEmptyParts := TESTCASE_SEPERATOR.Split(content, -1)
	parts := []string{}

	// remove empty parts
	for i := 0; i < len(partsWithEmptyParts); i++ {
		if partsWithEmptyParts[i] != "" {
			parts = append(parts, partsWithEmptyParts[i])
		}
	}

	for i := 0; i < len(parts); i++ {
		if i%2 == 0 && len(parts) > i+1 {

			testName := strings.TrimSpace(parts[i])
			testContent := parts[i+1]
			testParts := INPUT_OUTPUT_SEPERATOR.Split(testContent, -1)

			if len(testParts) != 2 {
				continue
			}

			testCases = append(testCases,
				NewTestCase(
					filename,
					testName,
					testParts[0],
					testParts[1],
				),
			)
		}
	}

	return testCases
}

func getTestCases() ([]TestCase, error) {
	var testCases []TestCase

	err := filepath.Walk(TESTS_DIR, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if !info.IsDir() && strings.HasSuffix(info.Name(), ".txt") {
			content, err := os.ReadFile(path)
			if err != nil {
				return err
			}

			testCases = append(testCases, getTestCasesForFile(path, string(content))...)
		}
		return nil
	})
	if err != nil {
		fmt.Println("Error walking the path:", err)
		return nil, err
	}

	return testCases, nil
}
