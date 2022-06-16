#include <stdio.h>


int main(void) {
  char c = 'a';
  int x = 123;
  float f = 456.789f;
  char* charp = &c;
  int* intp = &x;
  float* floatp = &f;
  printf("Char-pointer points to: %c\n", *charp);
  printf("Int-pointer points to: %d\n", *intp);
  printf("Float-pointer points to: %f\n", *floatp);
}
