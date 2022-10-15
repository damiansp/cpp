#include <stdbool.h>
#include <stdio.h>



bool is_multiple(int factor, int n);


int main() {
  for (int factor = 2; factor <= 6; factor++) {
    printf("12 is a multiple of %d: %d\n", factor, is_multiple(factor, 12));
  }
  return 0;
}


bool is_multiple(int factor, int n) {
  return n % factor == 0;
}
