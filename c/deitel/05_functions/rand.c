#include <stdio.h>
#include <stdlib.h>

#define MIN 1
#define MAX 6
#define DIGITS_PER_LINE 5


int main(void) {
  for (int i = 1; i <= 20; ++i) {
    printf("%10d", rand() % MAX + MIN);
    if (i % DIGITS_PER_LINE == 0) { printf("\n"); }
  }
  return 0;
}
