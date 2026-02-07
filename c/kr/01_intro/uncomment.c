#include <stdio.h>

#define MAXCHARS 1000


int get_line(char line[]);


/* remove comments from a .c file */
int main() {
  int i;
  int len;             // current line length
  char line[MAXCHARS]; // current line
  int saw_slash = 0;   // indicates if the last char was a / 
  int saw_star = 0;    // indicates if last char was * (only if in_ext_comment)
  int in_line_comment = 0;  // boolean
  int in_ext_comment = 0;

  while ((len = get_line(line)) > 0) {
    for (i = 0; i < len; ++i) {
      if (in_line_comment == 0 && in_ext_comment == 0) {
        if (saw_slash == 0) {
          if (line[i] != '/') {
            printf("%c", line[i]);
          } else {
            saw_slash = 1;
          }
        } else {  // saw slash
          if (line[i] == '/') {
            in_line_comment = 1;
            saw_slash = 0;
          } else if (line[i] == '*') {
            in_ext_comment = 1;
            saw_slash = 0;
          } else {
            printf("/%c", line[i]);
            saw_slash = 0;
          }
        }
      } else if (in_line_comment == 1) {
        if (line[i] == '\n') {
          printf("%c", line[i]);
          in_line_comment = 0;
          saw_slash = 0;
        }
      } else { // in_ext_comment
        if (line[i] == '*') {
          saw_star = 1;
        }
        if (saw_star == 1 && line[i] == '/') {
          in_ext_comment = 0;
          saw_star = 0;
        }
      }
    }
  }
}

/* Lets
   also try this
*/
int get_line(char line[]) {
  int c, i;

  for (i = 0; i < MAXCHARS - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
