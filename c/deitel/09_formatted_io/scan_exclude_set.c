#include <stdio.h>


int main() {
  char z[9];

  printf("Enter a string: ");
  scanf("%8[^aeiou]", z);
  printf("Got the following non-vowels: %s\n", z);
}
