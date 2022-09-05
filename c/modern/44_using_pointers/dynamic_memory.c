#include <stdio.h>
#include <stdlib.h>


int main(void) {
  printf("Allocating memory...\n");
  int* p = malloc(sizeof(int));
  if (p) {
    *p = 123456;
    printf("Pointer points to %d\n", *p);
  }
  printf("Deallocating memory...\n");
  free(p);
  printf("Dunzo.\n");
}
