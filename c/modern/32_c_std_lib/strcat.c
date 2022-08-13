#include <stdio.h>
#include <string.h>


int main(void) {
  char dest[30] = "Hello, ";
  char source[30] = "World!\n";
  strcat(dest, source);  // Changes dest in place
  printf("Concat: %s\n", dest);
}
