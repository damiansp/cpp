#include <stdio.h>


int main(void) {
  int x = 4;
  switch (x) {
  case 1:
  case 2:
  case 3:
    printf("0 < %d < 4\n", x); break;
  default:
    printf("%d not in interval [1, 3]\n", x); break;
  }
}
