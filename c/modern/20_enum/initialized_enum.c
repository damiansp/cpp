#include <stdio.h>


int main(void) {
  enum Days {WED = 3, THUR, FRI};
  enum Days my_day = FRI;
  printf("Declared enum FRI: %d\n", my_day);
}
