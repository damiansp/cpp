#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = calloc(5, sizeof(int));
  if (p) {
    printf("Init:\n");
    for (int i = 0; i < 5; ++i) { printf("%d ", p[i]); }
    printf("\nUpdating...");
    for (int i = 0; i < 5; ++i) {
      p[i] = 10 * (i + 1);
      printf("%d ", p[i]);
    }
  }
  free(p);
  printf("\n");
}
