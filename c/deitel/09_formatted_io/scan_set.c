#include <stdio.h>


int main() {
  char z[9];

  printf("Enter a string: ");
  scanf("%8[aeiou]", z);  // string-initial only
  printf("Got the following vowels: %s\n", z);
}
