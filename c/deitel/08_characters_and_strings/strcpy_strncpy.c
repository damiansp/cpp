#include <stdio.h>
#include <string.h>


int main() {
  char x[] = "Happy Birthday to You";
  char y[25];
  char z[15];

  strcpy(y, x);  // copy x into y
  printf("%s%s\n%s%s\n", "x: ", x, "y: ", y);
  strncpy(z, x, 14);  // copy first 14 chars of x into z
  z[14] = '\0';
  printf("z: %s\n", z);
  return 0;
}
