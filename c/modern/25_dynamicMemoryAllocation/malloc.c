#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p = malloc(sizeof(int));
  if (p) {
    *p = 123;
    printf("p = %d\n", *p);
  }
  free(p);
  
  int *q = malloc(sizeof(int));
  if (q == NULL) {
    printf("Error allocating memory. Exiting");
    return -1;
  }
  *q = 321;
  printf("q = %d\n", *q);
  free(q);

  int *r = malloc(sizeof *r);
  if (r) {
    *r = 579;
    printf("r = %d\n", *r);
  }
  free(r);
  r = NULL; // optional safeguard
}
