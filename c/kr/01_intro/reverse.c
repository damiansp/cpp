#include <stdio.h>

#define LINE_MAX 1000 // max chars allowed per line


int get_line(char line[], int line_max);
void reverse(char s[], int len);


int main() {
  int len;
  char line[LINE_MAX];

  while ((len = get_line(line, LINE_MAX)) > 0) {
    reverse(line, len);
    printf("%s", line);
  }
}


int get_line(char line[], int line_max) {
  int c, i;

  for (i = 0; i < line_max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}


/* Reverse a string in-place */
void reverse(char s[], int len) {
  int i;
  char temp;  // hold letter before swapping

  if (s[len - 1] == '\n') { // keep \n at end even after reversing
    len--;
  }
  for (i = 0; i < len / 2; ++i) {
    temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = temp;
  }
}
