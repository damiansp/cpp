#include <stdio.h>


int main() {
  int i = 873;
  double f = 123.98765;
  char s[] = "Happy Birthday";
  
  puts("Using precision for integers");
  printf("\t%.4d\n\t%.9d\n\n", i, i);
  puts("...and for floats");
  printf("\t%.3e\n\t%.3f\n\t%.3g\n", f, f, f);
  puts("...and strings");
  printf("\t%.11s\n", s);
  
  return 0;
}
