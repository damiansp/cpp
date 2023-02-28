#include <stdio.h>


int main() {
  int a, b, c, d, e, f, g;

  puts("Enter 7 integers, separated by spaces: ");
  // %i: decimal/oct/hex
  scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);
  puts("Inputs as decimal values:\n");
  printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
  return 0;
}
