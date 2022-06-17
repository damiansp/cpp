#include <stdio.h>


int main(void) {
  double d = 1.234;
  double* pd = &d;
  printf("Pointer points to value %f\n", *pd);
  *pd = 4.321;
  printf("After update, pointer points to value %f\n", *pd);
}
