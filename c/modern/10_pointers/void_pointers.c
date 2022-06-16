#include <stdio.h>


int main(void) {
  char c = 'a';
  int x = 123;
  float f = 123.456f;
  char* pc = &c;
  int* px = &x;
  float* pf = &f;
  void* vp; // can point to any type
  vp = px;
  printf("Void pointer points to %d\n", *((int*) vp));
  printf("Char pointer: %p\n", (void*) pc); // value is an adress
  printf("Int pointer: %p\n", (void*) px);
  printf("Float pointer: %p\n", (void*) pf);
}
