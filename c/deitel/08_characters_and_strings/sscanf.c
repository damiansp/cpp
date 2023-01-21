#include <stdio.h>


int main(void) {
  char s[] = "31298 87.375";
  int x;
  double y;

  sscanf(s, "%d %lf", &x, &y);
  printf("x: %6d\ny: %6.3f\n", x, y);
  return 0;
}
