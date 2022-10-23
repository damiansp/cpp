#include <stdio.h>


int gcd(int n1, int n2) {
  int max = n1 > n2 ? n2 : n1;
  int gcd = 1;
  for (int i = 2; i <= max; i++) {
    if ((float) (n1 % i) == 0 & (float) (n2 % i) == 0) {
      gcd = i;
    }
  }
  return gcd;
}


int main() {
  int n1, n2;
  printf("Find the greatest common divisor.\n");
  printf("Enter first int: ");
  scanf("%d", &n1);
  printf("And second: ");
  scanf("%d", &n2);
  printf("GCD(%d, %d): %d\n", n1, n2, gcd(n1, n2));
  return 0;
}
