#include <stdio.h>


struct Outer {
  int a;
  struct { // anonymous
    int b;
    int c;
  };
};


int main(void) {
  struct Outer o;
  o.a = 124;
  o.b = 235;
  o.c = 346;
  printf("Field a is %d\n", o.a);
  printf("Inner fields b and c are %d and %d\n", o.b, o.c);
}
