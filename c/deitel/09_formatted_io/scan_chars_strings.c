#include <stdio.h>


int main() {
  char x;
  char y[9];

  printf("Enter a string: ");
  scanf("%c%8s", &x, y);
  puts("Got:\n ");
  printf("%c, followed by %s\n", x, y);
}
