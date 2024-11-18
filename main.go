package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "a good   example"
	fmt.Println(reverseWords(s))

}

func reverseWords(s string) string {
	words := strings.Fields(s)

	fmt.Println(words)

	for i, j := 0, len(words)-1; i < j; i, j = i+1, j-1 {
		words[i], words[j] = words[j], words[i]
	}
	return strings.Join(words, " ")

}