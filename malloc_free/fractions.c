/*
Using malloc and free for manage the fractions structure
inside the heap. The differents functions use some tricks
pointers access.

GPL v3.0
 */

#include <stdio.h>
#include <stdlib.h>

struct fraction {
  int numerator;
  int denominator;
};

void
get_fractions(struct fraction *fractblock, int numfrac) {
  char buffer[32];

  for (int i = 0; i < numfrac; i++) {
    printf("Enter numerator %d: ", i+1);
    fgets(buffer, 32, stdin);
    int numerator = atoi(buffer);
    printf("Enter denominator %d: ", i+1);
    fgets(buffer, 32, stdin);
    int denominator = atoi(buffer);

    fractblock[i].numerator = numerator;
    fractblock[i].denominator = denominator;
  }
}

void
invert_fractions(struct fraction *fractblock, int numfrac) {
  for (int i=0; i < numfrac; i++) {
    int tmp = fractblock->numerator;
    fractblock->numerator = fractblock->denominator;
    fractblock->denominator = tmp;

    //pointer access for the next fraction
    fractblock += 1;
  }
}

void
print_fractions(struct fraction *fractblock, int numfrac) {
  for (int i=0; i < numfrac; i++) {
    // pointer access (+1) for the next fraction, similar of fractblock[i+1]
    printf("%d: %d/%d\n", i, (fractblock+i)->numerator, (fractblock+i)->denominator);
  }
}

int
main() {
  char buffer[32];
  printf("How many fractions to make?: ");
  fgets(buffer, 32, stdin);
  int numfract = atoi(buffer);

  // allocate block fraction to heap
  // sizeof(struct fraction) is the data type
  // *numfract is the size of the type to malloc
  struct fraction *blockfract = malloc(sizeof(struct fraction) *numfract);

  get_fractions(blockfract, numfract);
  invert_fractions(blockfract, numfract);
  print_fractions(blockfract, numfract);

  // free heap
  free(blockfract);

  return EXIT_SUCCESS;
}
