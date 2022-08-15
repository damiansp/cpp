#include <stdio.h>
#include <stdlib.h>


int main(void) {
  const char* str = "123 as a number.";
  long res = strtol(str, NULL, 10);
  printf("The result is: %ld\n", res);

  char* str_end;
  res = strtol(str, &str_end, 10);
  printf("Res is: %ld\n", res);
  printf("...and the rest is: %s\n", str_end);
}
