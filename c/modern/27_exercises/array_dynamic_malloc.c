#include <stdio.h>
#include <stdlib.h>


int main(void) {
  double *p = malloc(5 * sizeof(double));
  if (p) {
    printf("The values at p are:\n");
    for (int i = 0; i < 5; ++i) {
      p[i] = 1.111 * i;
      printf("%.2f ", p[i]);
    }
    printf("\n");
    free(p);
  }
}
