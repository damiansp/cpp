#include <stdio.h>


int main(void) {
  printf("for:\n ");
  for (int i = 0; i < 10; ++i) {
    printf("%d ", i);
  }
  printf("\n\nwhile:\n ");
  int i = 0;
  while (i < 10) {
    printf("%d ", i++);
  }
  printf("\n");
}
