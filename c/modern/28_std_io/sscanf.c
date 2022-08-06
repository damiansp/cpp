#include <stdio.h>


int main(void) {
  char buff[50] = "A 123 456.89";
  char c;
  int x;
  double d;
  sscanf(buff, "%c %d %lf", &c, &x, &d);
  printf("the values are: %c, %d, and %lf\n", c, x, d);
}
