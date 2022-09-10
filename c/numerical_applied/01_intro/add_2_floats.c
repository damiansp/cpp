#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  float n1, n2, sum;

  printf("Enter a number:\n");
  scanf("%f", &n1);
  printf("...and another:\n");
  scanf("%f", &n2);
  sum = n1 + n2;
  printf("%f + %f = %f\n", n1, n2, sum);
  return 0;
}
