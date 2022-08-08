#include <stdio.h>


int main(void) {
  char c = 'A';
  putchar(c);

  char arr[] = "Hello!";
  for (size_t i = 0; i < 7; ++i) {
    putchar(arr[i]);
  }
}
