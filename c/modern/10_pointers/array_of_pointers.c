#include <stdio.h>


int main(void) {
  char* p[] = {"First string.", "Second string.", "Third string."};
  for (int i = 0; i < 3; ++i) {
    printf("%s\n", p[i]);
  }
}
