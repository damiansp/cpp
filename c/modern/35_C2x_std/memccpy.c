#include <stdio.h>
#include <string.h>


int main(void) {
  const char source[] = "Copy until ~ is found.";
  char dest[sizeof source];
  const char stop_char = '~';
  void *p = memccpy(dest, source, stop_char, sizeof dest);
  if (p) {
    printf("Terminating char found. Result: '%s\n'", dest);
  } else {
    printf("Terminating char not found. Result: '%s'\n", dest);
  }
}
