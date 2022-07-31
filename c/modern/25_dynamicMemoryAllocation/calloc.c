#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = calloc(1, sizeof(int));
  if (p) {
    printf("p initialized to %d\n", *p);
    *p = 123;
    printf("updated to %d\n", *p);
  }
  free(p);
}
