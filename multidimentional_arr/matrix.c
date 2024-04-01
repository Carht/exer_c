#include <stdio.h>

/*
Simple example for a multidimentional array,
a matrix.

Author:
  Carht, carht[at]protonmail[dot]com

License:
  GPL v3.0
 */

int matrix[3][2]; // 3 rows, 2 columns.

int main() {
  
  matrix[0][0] = 0 * 10 + 0;
  matrix[0][1] = 0 * 10 + 1;
  matrix[1][0] = 1 * 10 + 0;
  matrix[1][1] = 1 * 10 + 1;
  matrix[2][0] = 2 * 10 + 0;
  matrix[2][1] = 2 * 10 + 1;
  
  printf("matrix[%d] ", 0);
  printf("%d ", matrix[0][0]);
  printf("%d ", matrix[0][1]);
  printf("\n");
  
  printf("matrix[%d] ", 1);
  printf("%d ", matrix[1][0]);
  printf("%d ", matrix[1][1]);
  printf("\n");

  printf("matrix[%d] ", 2);
  printf("%d ", matrix[2][0]);
  printf("%d ", matrix[2][1]);
  printf("\n");

  return 0;
}
