#include <stdio.h>
#include <string.h>


int main() {
  char x[] = "Home Sweet Home";

  printf("String x:\n %s\n", x);
  printf("After memmove:\n %s\n", (char *) memmove(x, &x[5], 10));
}
