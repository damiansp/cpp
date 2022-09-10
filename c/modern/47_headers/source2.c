#include <stdio.h>
#include "my_header.h"

void f(void) {
  printf("Calling macro from function in source2.c: %d\n", MY_MACRO);
}
