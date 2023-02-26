#include <stdio.h>


int main() {
  float f = 1234567.89;

  printf("%%e: %e\n", f);
  printf("%%E: %E\n", f);
  printf("%%f: %f\n", f);
  printf("%%g: %g\n", f);
  printf("%%G: %G\n", f);
  return 0;
}
