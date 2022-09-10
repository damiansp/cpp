#include <stdio.h>
#include "my_header.h"


int main(void) {
  printf("Calling macro from main: %d\n", MY_MACRO);
  f();
}
