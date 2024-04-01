#include <stdio.h>

/*

Head:
Take a decimal from stdin and return the
binary representation of this number.

Is functional for decimal numbers to 64 bits,
because the vector have 64 spaces.

Algoritm:

- If input is even save 0 in vector, if input is odd 
  save 1 in vector
- If input is even, divide (input / 2), if input is odd
  (input - 1)/2.
- repeat the process

Compilation:
$ gcc -o decimal_to_binary decimal_to_binary.c

Usage:
$ ./decimal_to_binary
Please input a decimal number and press Return: 11
1011

Author:
  Carht carht@protonmail.com

License:
  GPLv3.0

 */

void dec_to_bin(int x) {
  int bin_vec[64];

  int i = 0;

  while (x > 0) {
    bin_vec[i] = x % 2;
    // integer C transformation.
    x = x / 2;
    i++;
  }

  // reverse loop of vector.
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", bin_vec[j]);
  }
  printf("\n");
}

int main() {
  int n;
  printf("Please input a decimal number and press Return: ");
  scanf("%i", &n);
  dec_to_bin(n);

  return 0;
}
