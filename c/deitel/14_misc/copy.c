#include <stdio.h>


int main(int argc, char* argv[]) {
  if (argc != 3) {
    puts("Usage: copy infile outfile");
  } else {
    FILE* ifp;

    if ((ifp = fopen(argv[1], "r")) != NULL) {
      FILE* ofp;

      if ((ofp = fopen(argv[2], "w")) != NULL) {
        int c;

        while ((c = fgetc(ifp)) != EOF) {
          fputc(c, ofp);
        }
        fclose(ofp);
      } else {
        printf("File '%s' could not be opened\n", argv[2]);
      }
      fclose(ifp);
    } else {
      printf("File '%s' could not be opened\n", argv[1]);
    }
  }
}
