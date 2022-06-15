#include <stdio.h>


int main(void) {
  int fahrenheit, celsius;
  printf("Enter degrees Fahrenheit (int): ");
  scanf("%d", &fahrenheit);
  celsius = (fahrenheit - 32) / 1.8;
  printf("%dC\n", celsius);
  return 0;
}
