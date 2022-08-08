#include <stdio.h>


int main(void) {
  char str[100];
  FILE *fp = fopen("myfile.txt", "r");
  if (!fp) {
    printf("Error opening file.\n");
    return 1;
  }
  while (fgets(str, 100, fp) != NULL) { printf("%s", str); }
  fclose(fp);
}
