#include <stdio.h>


int main(void) {
  int x = 123;
  switch (x) {
  case 100:
    printf("x = 100\n"); break;
  case 123:
    printf("x = 123\n"); break;
  case 456:
    printf("x = 456\n"); break;
  default:
    printf("x is unmatched\n"); break;
  }
}
