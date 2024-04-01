#include <stdio.h>
#include <string.h>

char my_name[6]; /* 5 characters "carht" and the end-of-string \0 */

int main() {
  
  strcpy(my_name, "Carht");

  printf("%s\n", my_name);

  return 0;
}
