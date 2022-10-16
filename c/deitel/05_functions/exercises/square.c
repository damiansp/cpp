#include <stdio.h>


void print_square(int dim, char c);
void print_line(int dim, char c);


int main() {
  char c;
  int dim;
  printf("Dimension of square: ");
  scanf("%d", &dim);
  printf("Printing character: ");
  scanf(" %c", &c);
  print_square(dim, c);
  return 0;
}


void print_square(int dim, char c) {
  for (int i = 0; i < dim; i++) {
    print_line(dim, c);
  }
}


void print_line(int dim, char c) {
  for (int i = 0; i < dim; i++) { printf("%c", c); }
  printf("\n");
}
