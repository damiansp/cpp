#include <stdio.h>


int main(void) {
  char s[80];
  int x;
  double y;

  printf("Enter an int and a double:\n> ");
  scanf("%d %lf", &x, &y);
  sprintf(s, "int: %11d\ndouble: %8.2f", x, y);
  printf("%s\n%s\n", "The formatted output stored in the array is:", s);
  return 0;
}
