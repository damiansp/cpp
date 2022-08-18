#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = aligned_alloc(12, 512 * sizeof *p);
  printf("Allocated a 512-byte memory block.\n");
  printf("The address is %p\n", (void *)p);
  free(p);
}
