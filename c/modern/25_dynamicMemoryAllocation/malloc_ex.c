#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int *p = malloc(5 * sizeof(int));
  if (p) {
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    printf("Allocated an array of 5 ints\n");
    for (int i = 0; i < 5; ++i) {
      printf("%d\n", p[i]);
    }
  }
  free(p);

  char *c = malloc(sizeof(char));
  if (c) {
    *c = 'A';
    printf("The value of c is %c\n", *c);
  }
  free(c);
}
