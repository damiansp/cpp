#include <stdio.h>
#include <stdlib.h>


int main(void) {
  double *p1 = malloc(sizeof(double));
  if (p1) {
    *p1 = 123.456;
    printf("The value at p1 is: %f\n", *p1);
  }
  free(p1);

  int *p2 = malloc(sizeof *p2);
  if (p2) {
    *p2 = 789;
    printf("The value at p2 is: %d\n", *p2);
  }
  free(p2);
}
