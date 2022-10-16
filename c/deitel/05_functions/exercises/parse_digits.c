#include <stdio.h>


struct divmod_res {
  int quotient;
  int remainder;
};


void parse_digits(int n);
struct divmod_res divmod(int dividend, int divisor);


int main() {
  int n;

  printf("Enter a number between 1 and 32,767: ");
  scanf("%d", &n);
  parse_digits(n);
  return 0;
}


void parse_digits(int n) {
  const int MAX_DIGITS = 5;
  int n_digits = 1;
  struct divmod_res res;
  int rev_digits[MAX_DIGITS];
  int i = 0;
  
  while (n > 9) {
    res = divmod(n, 10);
    rev_digits[i++] = res.remainder;
    n = res.quotient;
    n_digits++;
  }
  rev_digits[i] = n;
  for (i = n_digits - 1; i >= 0; i--) { printf("%d  ", rev_digits[i]); }
  printf("\n");
}


struct divmod_res divmod(int dividend, int divisor) {
  int quotient = dividend / divisor;
  int remainder = dividend % divisor;
  struct divmod_res res = {quotient, remainder};
  return res;
}
