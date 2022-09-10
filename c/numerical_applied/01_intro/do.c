#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  float n,
    total = 0;
  int i = 0;

  do {
    printf("Enter a number: ");
    scanf("%f", &n);
    total += n;
  } while (i++ < 5);
  printf("The total is: %f\n", total);
}
