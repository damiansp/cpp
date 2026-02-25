#include <stdio.h>

#define MAXLEN 1000


void escape(char s[], char t[]);


int main() {
  char s[] = "This is some\ntext.\tIt has a few escaped characters.\n";
  char t[MAXLEN] = "";

  escape(s, t);
  printf("Original:\n%s\n", s);
  printf("Escaped:\n%s\n", t);
  return 0;
}


/* Replace escaped characters with string literals */
void escape(char s[], char t[]) {
  int i;
  int j = 0;

  for (i = 0; s[i] != '\0'; ++i) {
    switch (s[i]) {
    case '\n':
      t[j++] = '\\';
      t[j++] = 'n';
      break;
    case '\t':
      t[j++] = '\\';
      t[j++] = 't';
      break;
    default:
      t[j++] = s[i];
      break;
    }
  }
  t[j] = '\0';
}
