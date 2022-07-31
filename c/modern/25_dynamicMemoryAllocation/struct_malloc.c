#include <stdio.h>
#include <stdlib.h>


typedef struct {
  char c;
  int x;
  double d;
} LeStruct;


int main(void) {
  LeStruct *s = malloc(sizeof(LeStruct));
  if (s) {
    s->c = 'A';
    s->x = 123;
    s->d = 456.789;
    printf("c = %c\n", s->c);
    printf("x = %d\n", s->x);
    printf("d = %f\n", s->d);
  }
  free(s);
}
