#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = malloc(5 * sizeof(int));
  if (p) {
    printf("Allocated %zu bytes.\n", 5 * sizeof(int));
  }
  
  int *q = realloc(p, 10 * sizeof(int));
  if (q) {
    printf("Resized allocated memory, now %zu bytes.\n", 10 * sizeof(int));
    free(q);
  } else { free(p); }
}
