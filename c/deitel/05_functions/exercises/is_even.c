#include <stdbool.h>
#include <stdio.h>


bool is_even(int n);


int main() {
  for (int i = 0; i < 10; i++) {
    printf("%d is even: %d\n", i, is_even(i));
  }
}


bool is_even(int n) {
  return n % 2 == 0;
}
