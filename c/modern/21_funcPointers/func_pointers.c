#include <stdio.h>


void f() {
  printf("Hello, Function!\n");
}


int main(void) {
  void (*fp)() = f;
  fp();
}
