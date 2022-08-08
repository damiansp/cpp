#include <stdio.h>


int main(void) {
  FILE *fp = fopen("newfile.txt", "w");
  fprintf(fp, "%s\n%s", "Some sample output.", "And a bit more");
  fclose(fp);
  printf("Wrote data to 'newfile.txt'\n");
}
