#include <stdio.h>


int cube_by_val(int n);
void cube_by_ref(int *np);


int main(void) {
  int m = 3;
  int n = 5;

  printf("n: %d\n", n);
  n = cube_by_val(n);
  printf("cube_by_val(n): %d\n", n);

  printf("m: %d\n", m);
  cube_by_ref(&m);
  printf("cube_by_ref(m): %d\n", m);
  return 0;
}


int cube_by_val(int n) {
  return n * n * n;
}


void cube_by_ref(int *np) {
  *np = *np * *np * *np;
}
