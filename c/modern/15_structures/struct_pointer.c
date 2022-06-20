#include <stdio.h>


struct MyStruct {
  char c;
  int x;
  double d;
};


int main(void) {
  struct MyStruct s = {'a', 123, 456.789};
  struct MyStruct *ps = &s;
  printf("s.c: %c\n", (*ps).c);
  printf("s.x: %d\n", (*ps).x);
  printf("s.d: %f\n", (*ps).d);
  printf("Again, like I said...\n");
  printf("s.c: %c\n", ps->c);
  printf("s.x: %d\n", ps->x);
  printf("s.d: %f\n", ps->d);
}
