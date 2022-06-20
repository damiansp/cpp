#include <stdio.h>


int increment(int n) {
  return ++n;
}
  

int main(void) {
  int n = 0;
  printf("n = %d\n", n);
  n = increment(n);
  printf("After increment(): n = %d\n", n);
}
