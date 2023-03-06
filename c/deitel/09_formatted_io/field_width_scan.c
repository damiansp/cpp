#include <stdio.h>


int main() {
  int x, y;

  printf("Enter a 6-digit number: ");
  scanf("%2d%d", &x, &y);
  printf("Got leading digit: %d, followed by %d\n", x, y);
}
