#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int x = 20, y = 10;

  printf("x is %d, y is %d\n", x, y);

  swap(&x, &y);
  printf("x is %d, y is %d\n", x, y);

  return EXIT_SUCCESS;
}
