#include <stdio.h>
#include <stdlib.h>

#define N_SIDES 6
#define ROLLS_PER_ROW 5


int roll_die() { return rand() % N_SIDES + 1; }


int main(void) {
  unsigned int seed;

  printf("Enter seed: ");
  scanf("%u", &seed);
  srand(seed);
  for (int i = 1; i <= 10; ++i) {
    printf("%5d", roll_die());
    if (i % ROLLS_PER_ROW == 0) { printf("\n"); }
  }
  return 0;
}
