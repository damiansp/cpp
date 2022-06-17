#include <stdio.h>


void f0(void) {
  printf("f0 called\n");
}

void f1(void) {
  printf("f1 called\n");
}

void f2(void) {
  printf("f2 called\n");
}


int main(void) {
  void (*fp[])() = {f0, f1, f2};
  for (int i = 0; i < 3; ++i) {
    fp[i]();
  }
}
