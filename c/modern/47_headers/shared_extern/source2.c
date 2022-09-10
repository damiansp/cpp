#include <stdio.h>
#include "my_header.h"


const int MY_MAX = 123;
const char *MY_MESSAGE = "A constant secret.";
const double MY_PI = 3.14159;
int my_shared_int = 456;
double my_shared_double = 789.012;


void f() {
  printf("In source2:\nAccessing shared constants:\n");
  printf("%d, %s, %f\n", MY_MAX, MY_MESSAGE, MY_PI);
  printf("Accessing global variables:\n");
  printf("%d, %f\n", my_shared_int, my_shared_double);
}
