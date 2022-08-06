#include <assert.h>
#include <stdalign.h>
#include <stddef.h>
#include <stdio.h>


int main(void) {
  int arr[4];
  static_assert(_Alignof(arr) == 4, "unexpected alignment");
  assert(alignof(max_align_t) == 16);
  printf("alignment of arr: %zu\n", _Alignof(arr));
  printf("alignment of max_align_t: %zu\n", alignof(max_align_t));
}
