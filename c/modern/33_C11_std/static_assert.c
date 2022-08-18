/* Note: will not compile.  Assertion error at compile time */
#include <assert.h>  // w/o use _Static_assert() instead


int main(void) {
  static_assert(sizeof(int) == 8, "The size of int is not 8\n");
  static_assert(sizeof(long) == 9, "The size of long is not 8\n");
}
