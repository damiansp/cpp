#include <stdio.h>


struct MyStruct {
  char c;
  int x;
  double d;
};


// alternately
typedef struct {
  char c;
  int x;
  double d;
} MyOtherStruct;


int main(void) {
  struct MyStruct s = {'a', 1, 2.345};
  printf("Variable s of type MyStruct initialized with:\n");
  printf("  - c: %c\n", s.c);
  printf("  - x: %d\n", s.x);
  printf("  - d: %f\n", s.d);

  MyOtherStruct os = {.x=23, .d=45.67, .c='c'};
  printf("Variable s of type MyOtherStruct initialized with:\n");
  printf("  - c: %c\n", os.c);
  printf("  - x: %d\n", os.x);
  printf("  - d: %f\n", os.d);
}
