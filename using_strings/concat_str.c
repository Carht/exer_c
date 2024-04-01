#include <stdio.h>
#include <string.h>

/*
Title:
  Concat some input strings from the stdin.

Author:
  Carcht carht[at]protonmail[dot]com

License:
  GPL v3.0
 */


char first_word[100];  // first word, max 100 characters, include  \0
char second_word[100]; // second word
char concat_words[200]; // concatenation result

int main() {
  // asignation
  printf("Enter a first word: ");
  fgets(first_word, sizeof(first_word), stdin);

  printf("Enter a second word: ");
  fgets(second_word, sizeof(second_word), stdin);

  // set the \n to end-of-string, included with fgets from the stdin
  first_word[strlen(first_word) - 1] = '\0';
  
  // concatenation
  strcpy(concat_words, first_word);
  strcat(concat_words, " ");
  strcat(concat_words, second_word);

  printf("Concatenated words: %s", concat_words);

  return 0;
}
