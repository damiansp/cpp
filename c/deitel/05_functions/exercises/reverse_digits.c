#include <stdio.h>


int reverse(int n) {
  int reversed = 0;
  int remainder;
  
  while (n > 0) {
    remainder = n % 10;
    n /= 10;
    reversed *= 10;
    reversed += remainder;
  }
  return reversed;
}


int main() {
  int n;

  printf("Enter number to be reversed: ");
  scanf("%d", &n);
  printf("Reversed: %d\n", reverse(n));
  return 0;
}
