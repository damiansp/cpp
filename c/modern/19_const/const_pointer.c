#include <stdio.h>


int main(void) {
  int x = 123;
  int *const p = &x; // constant pointer (cannot reassign p)
  const int *q = &x; // constant pointed-to object (cannot change x)
  const int *const r = &x; // both constant
  printf(
    "Defined constant pointer with value: %p that points to %d\n",
    (void *) p,
    *p);
  printf(
    "Defined constant pointed-to object with pointer value: %p and pointed ",
    (void *) q);
  printf("to value %d\n", *q);
}
