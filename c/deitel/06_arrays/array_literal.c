#include <stdio.h>


int main(void) {
  int n[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
  printf("%s%13s\n", "Index", "Value");
  for (int i = 0; i < 10; i++) {
    printf("%5d%13d\n", i, n[i]);
  }
  return 0;
}
