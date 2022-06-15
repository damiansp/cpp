#include <stdio.h>


int main(void) {
  int x = 7,
    y = 7;
  if (x == y) {
    printf("%d = %d\n", x, y);
  } else {
    printf("%d != %d\n", x, y);
  }
  y++;
  if (x == y) {
    printf("%d = %d\n", x, y);
  } else {
    printf("%d != %d\n", x, y);
  }
}
