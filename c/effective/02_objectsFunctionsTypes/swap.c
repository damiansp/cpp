#include <stdio.h>


void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  // a: 17, b:21 (swapped for duration of func)
  printf("swap: a = %d, b = %d\n", a, b);
}


void swap_in_place(int* pa, int* pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main(void) {
  int a = 21;
  int b = 17;
  swap(a, b);
  printf("main: a = %d, b = %d\n", a, b);  // a: 21, b: 17 (not swapped)
  swap_in_place(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);  // a: 17, b: 21 (swapped)
  return 0;
}
