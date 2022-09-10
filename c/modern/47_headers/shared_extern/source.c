#include <stdio.h>
#include "my_header.h"


void f(void);


int main(void) {
  printf("In source.c\nAccessing shared constanst:\n");
  printf("MY_MAX: %d, MY_MESSAGE: %s, MY_PI: %f\n", MY_MAX, MY_MESSAGE, MY_PI);
  printf("Accessing shared global variables:\n");
  printf("int: %d, double: %f\n", my_shared_int, my_shared_double);
  f(); // defined in source2.c
}
