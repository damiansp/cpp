#include <stdio.h>


float min(float a, float b, float c) {
  float minimum = a;
  if (b < minimum) { minimum = b; }
  if (c < minimum) { minimum = c; }
  return minimum;
}


int main() {
  printf("min(1.1, 2.2, 3.3): %.1f\n", min(1.1, 2.2, 3.3));
  printf("min(3.3, 2.2, 1.1): %.1f\n", min(3.3, 2.2, 1.1));
  printf("min(1.1, -1.1, -1.1): %.1f\n", min(1.1, -1.1, -1.1));;
  return 0;
}
