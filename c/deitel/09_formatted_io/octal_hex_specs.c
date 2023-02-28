#include <stdio.h>


int main() {
  int n = 1427;
  double p = 1427.0;

  printf("Decimal:     %d\n", n);
  printf("Octal:       %#o\n", n);  // add leading 0
  printf("Hex (lower): %#x\n", n);  // add leading 0x
  printf("Hex (upper): %#X\n", n);  // add leading 0X
  printf("\nFloat:       %g\n", p);
  printf("Float:       %#g\n", p);    // force decimal
  return 0;
}
