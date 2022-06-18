#include <stdio.h>


int sum(int x, int y) {
  return x + y;
}


int main(void) {
  int x = 11;
  int y = 23;
  int total = sum(x, y);
  printf("%d + %d = %d\n", x, y, total);
}
