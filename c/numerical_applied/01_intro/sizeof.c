#include <limits.h>
//#include <math.h>
#include <stdio.h>


int main() {
  int i;
  unsigned int ui;
  float f;
  double d;
  
  printf("Size of int: %lu\n", sizeof(i));
  printf("Size of unsigned int: %lu\n", sizeof(ui));
  printf("Size of float: %lu\n", sizeof(f));
  printf("Size of double: %lu\n", sizeof(d));
  return 0;
}
