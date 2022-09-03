#include <stdio.h>


int main(void) {
  char c = 'D';
  char *pc = &c; // point to an existing object with &
  int n = 123;
  int *pn = &n;
  printf("Char pointer points to %c\n", *pc);
  printf("int pointer points to %d\n", *pn);
}
