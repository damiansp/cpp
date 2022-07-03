#include <stdio.h>


int main(void) {
  enum Days {WED=3, THUR, FRI} my_days = FRI;
  printf("Declared enum FRI with val: %d\n", my_days);
}
