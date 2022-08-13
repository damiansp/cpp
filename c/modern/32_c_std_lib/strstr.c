#include <stdio.h>
#include <string.h>


int main(void) {
  char str[] = "Hello, World!";
  char sub[] = "World";
  char *pos = strstr(str, sub);
  if (pos) { printf("%s found in %s at position %ld\n", sub, str, pos - str); }
  else { printf("%s not found in %s\n", sub, str); }
  
}
