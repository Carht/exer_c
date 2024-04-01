#include <stdio.h>
#include <string.h>

/*
Title:
 Leng of a string from std input, using fgets.

Author: 
 Carht carht[at]protonmail[dot]com

License:
 GPL v3.0
 */

char line[120]; //static character value for a line

int main() {
  printf("Enter a line: ");
  fgets(line, sizeof(line), stdin);

  printf("The length of the line is: %d\n", strlen(line));

  return 0;
}
