#include <stdio.h>


void display_bits(unsigned int val);


int main() {
  unsigned int x;

  printf("Enter a non-negative int: ");
  scanf("%u", &x);
  display_bits(x);
}


void display_bits(unsigned int val) {
  unsigned int display_mask = 1 << 31;

  printf("%10u -> ", val);
  for (unsigned int i = 1; i <= 32; ++i) {
    putchar(val & display_mask ? '1' : '0');
    val <<= 1;
    if (i % 8 == 0) {
      putchar(' ');
    }
  }
  putchar('\n');
}
