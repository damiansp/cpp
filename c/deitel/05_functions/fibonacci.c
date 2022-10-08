#include <stdio.h>


long fib(long n);


int main(void) {
  long res, n;

  printf("Enter an int: ");
  scanf("%ld", &n);
  res = fib(n);
  printf("Fib(%ld) = %ld\n", n, res);

  return 0;
}


long fib(long n) {
  if (n == 0 || n == 1) { return n; }
  return fib(n - 1) + fib(n - 2);
}
