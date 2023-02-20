#include <stdio.h>

#define A 65
#define Z (A) + 25
#define a 97
#define z (a) + 25
#define ROT ((a) - (A))

void upper(char s[], int len) {
  char c;
  
  for (int i = 0; i < len; i++) {
    c = s[i];
    if (c >= a && c <= z) {
      printf("%c", c - ROT);
    } else {
      printf("%c", c);
    }
  }
}

void to_upper(char* s) {
  while (*s != '\0') {
    if (*s >= a && *s <= z) {
      printf("%c", *s - ROT);
    } else {
      printf("%c", *s);
    }
    *s++;
  }
}


void lower(char s[], int len) {
  char c;
  
  for (int i = 0; i < len; i++) {
    c = s[i];
    if (c >= A && c <= Z) {
      printf("%c", c + ROT);
    } else {
      printf("%c", c);
    }
  }
}


void to_lower(char* s) {
  while (*s != '\0') {
    if (*s >= A && *s <= Z) {
      printf("%c", *s + ROT);
    } else {
      printf("%c", *s);
    }
    s++;
  }
}
  

int main() {
  char s1[] = "you don't have to yell";
  char s2[] = "PLEASE, KEEP YOUR VOICE DOWN";

  upper(s1, 22);
  printf("\n");
  lower(s2, 28);
  printf("\n");

  to_upper(s1);
  printf("\n");
  to_lower(s2);
  printf("\n");
}
