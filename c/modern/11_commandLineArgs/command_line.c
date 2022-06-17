#include <stdio.h>


int main(int argc, char* argv[]) {
  printf("The command-line args were:\n");
  for (int i = 0; i < argc; ++i) {
    printf("  - %s\n", argv[i]);
  }
}
