/*
Dynamic change the size of a string, the original size have
a specific size, but using malloc I can change by another
size, util for the new string dimention.

GPL v3.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
count_base(const char *html) {
  int counter = 0;

  for (int i=0; i < strlen(html); i++) {
    if (html[i] == '<' || html[i] == '>') {
      counter += 1;
    }
  }
  
  return counter;
}


void
expand(const char *html, char *expandedStr) {
  int j = 0;
  for (int i = 0; i < strlen(html); i++) {
    if (html[i] == '<') {
      strcpy(&expandedStr[j], "&lt;");
      j += 4;
    } else if (html[i] == '>') {
      strcpy(&expandedStr[j], "&gt;");
      j += 4;
    } else {
      expandedStr[j] = html[i];
      j += 1;
    }
  }
}


char *
expandHtml(const char *html) {
  int count = count_base(html);
  int origlen = strlen(html);
  int expandedlen = origlen + count * 4 + 1;
  char *expandedHtml = malloc(sizeof(char) *expandedlen);
  expand(html, expandedHtml);

  return expandedHtml;
}

int
main() {
  const char *orig = "<a href=\"badurl\">a link!</a>";
  char *expanded = expandHtml(orig);
  printf("Original string: %s\n", orig);
  printf("Orig string lenght: %d\n", strlen(orig));
  
  printf("Expanded string: %s\n", expanded);
  printf("Expanded string length: %d\n", strlen(expanded));
  free(expanded);

  return EXIT_SUCCESS;
}
