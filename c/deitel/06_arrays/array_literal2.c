#include <stdio.h>

#define SIZE 10


int main(void) {
  int s[SIZE];
  int i;
  for (i = 0; i < SIZE; i++) {
    s[i] = 2 + 2*i;
  }
  printf("%s%13s\n", "Index", "Value");
  for (i = 0; i < 10; i++) {
    printf("%5d%13d\n", i, s[i]);
  }
  return 0;
}
