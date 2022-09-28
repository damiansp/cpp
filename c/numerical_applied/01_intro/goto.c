#include <stdio.h>


int main() {
  int i,
    testval = 2;

  for (i = 0; i < 10; i++) {
    printf("i: %d\n", i);
    if (i > testval) {
      goto error;
    }
  }
  printf("Process terminating normally\n");
  return 0;
 error:
  printf("Error flagged\n");
  return 1;
}
