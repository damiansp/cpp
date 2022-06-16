#include <stdio.h>


int main(void) {
  int a[] = {1, 2, 3, 4, 5};
  int* p = a;  // int* p = &a[0]
  printf("p points to %d\n", *p);  // 1
  p++;
  printf("p points to %d\n", *p);  // 2
  p += 2;
  printf("p points to %d\n", *p);  // 4
}
