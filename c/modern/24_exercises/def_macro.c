#include <stdio.h>

#define MAX 999


int main(void) {
  printf("Macro MAX defined.\n");
  int x = MAX;
  printf("x assigned the value of MAX: %d\n", x);

  #undef MAX
  printf("MAX no longer defined\n");
}
