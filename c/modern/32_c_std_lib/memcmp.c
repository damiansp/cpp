#include <stdio.h>
#include <string.h>


int main(void) {
  int a1[] = {10, 20, 30, 40, 50};
  int a2[] = {10, 20, 30, 40, 50};
  int res = memcmp(a1, a2, 5 * sizeof(int));
  if (res == 0) { printf("The two arrays match.\n"); }
  else { printf("The arrays do not match\n"); }
}
