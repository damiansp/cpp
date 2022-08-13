#include <stdio.h>
#include <string.h>


int main(void) {
  const char str[] = "How many characters does it take?";
  size_t str_len = strlen(str);
  printf("String contains %zu characters.\n", str_len);

  const char *p = "Again like I said: how many?";
  str_len = strlen(p);
  printf("Again like I said: %zu characters.\n", str_len);
}
