#define NDEBUG  // must be before <assert.h>; if set, asserts ignored
#include <assert.h>
#include <ctype.h>
#include <stdio.h>


int main() {
  assert(0);
  printf("Program running...");
  return 0;
}
