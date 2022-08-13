#include <stdio.h>
#include <string.h>


int main(void) {
  char dest[30];
  char source[30] = "Hello, World!";
  strcpy(dest, source);
  printf("Copied string: %s\n", dest);
}
