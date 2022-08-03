#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = malloc(sizeof(int));
  if (p) {  printf("Allocated %zu bytes.\n", sizeof *p); }
  int *pnew = realloc(p, 10 * sizeof(int));
  if (pnew) {
    printf("Resizing allocated memory...\n");
    printf("Now allocated %zu bytes.\n", 10 * sizeof(int));
    free(pnew);
  } else {
    free(p);
  }
}
