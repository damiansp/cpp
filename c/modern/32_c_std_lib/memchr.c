#include <stdio.h>
#include <string.h>


int main(void) {
  char s[] = "Hello, World!";
  char *pfound = memchr(s, 'W', strlen(s));
  if (pfound != NULL) { printf("Character (byte) found at: %s\n", pfound); }
  else { printf("Character (byte) no found: %s\n", pfound); }
}
