#include <stdio.h>
#include <string.h>

char first_part[20];  // first word, max 19 characters, last \0
char second_part[20]; // second word
char concat_strs[45]; // concatenation result

int main() {
  // asignation
  strcpy(first_part, "Hello,");
  strcpy(second_part, "World!");

  strcpy(concat_strs, first_part);

  // concatenation
  strcat(concat_strs, " ");
  strcat(concat_strs, second_part);

  printf("Concatenated words: %s\n", concat_strs);

  return 0;
}
