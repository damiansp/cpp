#include <stdio.h>


int main(void) {
  int b[] = {10, 20, 30, 40};
  int *b_ptr = b;
  int i;
  int offset;

  printf("Array b printed with:\n");
  printf("Array subscript notation\n");
  for (i = 0; i < 4; i++) { printf("b[%d] = %d\n", i, b[i]); }
  printf("\nPointer/offset notation where the pointer is the array name\n");
  for (offset = 0; offset < 4; offset++) {
    printf("*(b + %d) = %d\n", offset, *(b + offset));
  }
  printf("\nPointer subscript notation\n");
  for (i = 0; i < 4; i++) { printf("b_ptr[%d] = %d\n", i, b_ptr[i]); }
  printf("\nPointer/offset notation\n");
  for (offset = 0; offset < 4; offset++) {
    printf("*(b_ptr + %d) = %d\n", offset, *(b_ptr + offset));
  }
}
