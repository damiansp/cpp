#include <stdio.h>
#include "my_header.h"


void f(); // declared in source2.c


int main(void) {
  printf("Calling macro from main: %d\n", MY_MACRO);
  f();
}
