#include <stdio.h>


union MyUnion {
  char c;
  int x;
  double d;
};


int main(void) {
  union MyUnion u;
  u.c = 'A';
  printf("u.c: %c\n", u.c);
  u.x = 123;
  printf("u.x: %d\n", u.x);
  printf("u.c: %c\n", u.c); // no longer correct b/c memory overwritten by x
}
