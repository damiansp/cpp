#include <stdio.h>


void le_func(void) {
  printf("The name of the calling function is %s\n", __func__);
}


int main(void) {
  printf("Hello from line %d\n", __LINE__);
  printf("Hello from file %s\n", __FILE__);
  printf("Hello on this glorious date of %s\n", __DATE__);
  le_func();
  printf("Hello from C %ld\n", __STDC_VERSION__);
}
