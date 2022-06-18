#include <stdio.h>


int main(void) {
  char *p[] = {
    "Woke up this morning",
    "Smiled at the rising sun",
    "Three little birds",
    "Pitched by my doorstep"};
  for (int i = 0; i < 4; ++i) {
    printf("%s\n", p[i]);
  }    
}
