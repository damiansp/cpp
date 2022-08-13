#include <stdio.h>


int main(void) {
  int blanks = 0,
    digits = 0,
    total = 0;
  int c;

  for (; (c = getchar()) != EOF; total++) {
    if (c == ' ') { ++blanks; }
    else if (c >= '0' && c <= '9') { ++digits; }
  }
  printf(" blanks: %d\n digits: %d\n total: %d\n\n", blanks, digits, total);
  return 0;
}
