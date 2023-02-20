#include <stdio.h>

#define A 65
#define Z A + 25
#define a 97
#define z a + 25
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


int main() {
  char s1[] = "you don't have to yell";
  char s2[] = "PLEASE, KEEP YOUR VOICE DOWN";

  upper(s1, 22);
  printf("\n");
  lower(s2, 28);
  printf("\n");
}
