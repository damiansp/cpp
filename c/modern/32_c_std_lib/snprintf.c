#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int x = 23;
  char buff[100];
  snprintf(buff, sizeof buff, "%d", x);

  int n_chars = snprintf(buff, sizeof buff, "%d", x);
  printf("Res is: %s\n", buff);
  printf("No. chars written: %d\n", n_chars);

  double d = 456.89;
  n_chars = snprintf(buff, sizeof buff, "int: %d, double: %g", x, d);
  printf("%s\n", buff);
  printf("No. chars written: %d\n", n_chars);
}
