#include <stdio.h>
#include <stdlib.h>


void print();


int main() {
  atexit(print);
  puts(
    "  1) Terminate with exit function\n"
    "  2) Terminate normally\n");
  int choice;
  scanf("%d", &choice);
  if (choice == 1) {
    puts("\nTerminating with exit function\n");
    exit(EXIT_SUCCESS);
  }
  puts("\nTerminating by reaching end of program\n");

  return 0;
}


void print() {
  puts("Executing function 'print()' at program termination\nProgram Terminated\n");
}
