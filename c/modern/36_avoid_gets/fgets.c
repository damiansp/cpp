// Prefer fgets to gets
#include <stdio.h>


int main(void) {
  char buff[100];
  printf("Plese enter a string:\n> ");
  fgets(buff, 100, stdin);
  printf("Got: %s\n", buff);
}
