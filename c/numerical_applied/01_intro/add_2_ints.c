#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int n1, n2, sum;
  printf("Enter an integer:\n");
  scanf("%d", &n1);
  printf("...and another:\n");
  scanf("%d", &n2);
  sum = n1 + n2;
  printf("%d + %d = %d\n", n1, n2, sum);
  return 0;
}
