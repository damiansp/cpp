#include <stdio.h>
#include <stdlib.h>


void print_file(FILE* fptr) {
  int c;
  rewind(fptr);
  while ((c = getc(fptr)) != EOF) {
    putc(c, stdout);
  }
}


void double_space(FILE* ifp, FILE* ofp) {
  int c;
  rewind(ifp);
  while ((c = getc(ifp)) != EOF) {
    putc(c, ofp);
    //putchar(c); // debug - print to screen
    if (c == '\n') {
      putc('\n', ofp);
    }
  }
}


int main(int argc, char* argv[]) {
  FILE* ifp;
  FILE* ofp;

  if (argc != 3) {
    printf("Usage: double_space_file INPUT_FILE OUTPUTFILE\n");
    exit(1);
  }
  ifp = fopen(argv[1], "r+");
  ofp = fopen(argv[2], "w+");
  printf("%s read in as:\n\n", argv[1]);
  print_file(ifp);
  printf("\n\n");
  double_space(ifp, ofp);
  printf("%s written as:\n\n", argv[2]);
  print_file(ofp);
  printf("\n\n");
}
