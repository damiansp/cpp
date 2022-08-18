#include <stdalign.h> // _Alignas -> alignas
#include <stdio.h>


struct S {
  alignas(16) int x[4];
};


int main(void) {
  printf("Alignment of struct S is %zu bytes\n", alignof(struct S));
}
