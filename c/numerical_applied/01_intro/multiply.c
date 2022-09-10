#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  float n1, n2;

  printf("A number: ");
  scanf("%f", &n1);
  printf("Anudder: ");
  scanf("%f", &n2);
  printf("%f * %f = %f\n", n1, n2, n1 * n2);
  return 0;
}
