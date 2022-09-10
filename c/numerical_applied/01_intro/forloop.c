#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main() {
  int n,
    total = 0;
  
  for (int i = 1; i <= 10; i++) {
    total += i;
  }
  printf("The sum of numbers 1:10: %d\n", total);
}
