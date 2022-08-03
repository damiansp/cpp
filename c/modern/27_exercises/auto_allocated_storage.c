#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int x = 123;
  printf("x (with auto storage duration): %d\n", x);
  int *p = malloc(sizeof(int));
  printf("p (with manually allocate storage duration): %p\n", (void *) p);
  free(p);  // p freed here
} // x auto freed here
