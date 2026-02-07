#include <stdio.h>

#define MAXCHARS 1000


int saw_slash = 0;   // indicates if the last char was a / 
int saw_star = 0;    // indicates if last char was * (only if in_ext_comment)
int in_line_comment = 0;  // boolean
int in_ext_comment = 0;

int get_line(char line[]);
void update_basic(char c);
void update(char c);
void update_if_saw_slash(char c);
void update_in_inline_comment(char c);
void update_in_extended_comment(char c);


/* remove comments from a .c file */
int main() {
  int i;
  int len;             // current line length
  char line[MAXCHARS]; // current line

  while ((len = get_line(line)) > 0) {
    for (i = 0; i < len; ++i) {
      if (in_line_comment == 0 && in_ext_comment == 0) {
        update_basic(line[i]);
      } else if (in_line_comment == 1) {
        update_in_inline_comment(line[i]);
      } else { // in_ext_comment
        update_in_extended_comment(line[i]);
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


void update_basic(char c) {
  extern int saw_slash;
  
  if (saw_slash == 0) { update(c); }
  else { update_if_saw_slash(c); }
}


void update(char c) {
  extern int saw_slash;
  
  if (c != '/') { printf("%c", c); }
  else { saw_slash = 1; }
}


void update_if_saw_slash(char c) {
  extern int in_line_comment;
  extern int saw_slash;
  
  if (c == '/') {
    in_line_comment = 1;
    saw_slash = 0;
  } else if (c == '*') {
    in_ext_comment = 1;
    saw_slash = 0;
  } else {
    printf("/%c", c);
    saw_slash = 0;
  }
}


void update_in_inline_comment(char c) {
  extern int in_line_comment;
  extern int saw_slash;
  
  if (c == '\n') {
    printf("%c", c);
    in_line_comment = 0;
    saw_slash = 0;
  }
}


void update_in_extended_comment(char c) {
  extern int in_ext_comment;
  extern int saw_star;
  
  if (c == '*') { saw_star = 1; }
  if (saw_star == 1 && c == '/') {
    in_ext_comment = 0;
    saw_star = 0;
  }
}
