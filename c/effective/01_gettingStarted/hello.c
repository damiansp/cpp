#include <stdio.h>
#include <stdlib.h>

/* NOTE: in C, <func()> means func() can take any number of parameters, NOT that
   it takes no parameters. Best to specify <void> explicitly if no params */
int main(void) {
  puts("Hello, World!");
  return EXIT_SUCCESS;
}
