#include <stdio.h>
#define MAXCHARS 1000  // max chars per line


int get_line(char line[], int max);


int main() {
  int len;
  char line[MAXCHARS];
  
  while ((len = get_line(line, MAXCHARS)) > 0) {
    printf("%s\n", line, len);
  }
}


int get_line(char line[], int max) {
  char c;
  int  i;
  int last_char = -1;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    if (c != ' ' && c != '\t') {
      last_char = i;
    }
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[last_char + 1] = '\0';
  return i;
}

