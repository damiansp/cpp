#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main() {
  char select[7] = {'s', 'e', 'l', 'e', 'c', 't', '\0'};
  char s1[32] = "I am string 1";
  char s2[16] = "I am string 2";
  char s3[16];
  int len;

  len = strlen(s1);
  printf("Length s1: %d\n", len);
  len = strlen(s2);
  printf("Length s2: %d\n", len);
  len = strlen(s3);
  printf("Length s3: %d\n", len);

  strcpy(s3, s1); // from 1 to 3
  printf("s3 after copy: %s\n", s3);
  len = strlen(s3);
  printf("Length s3: %d\n", len);

  if (strcmp(s1, s3) == 0) {
    printf("strings are the same\n");
  }
  strcat(s1, s2); // adds 2 to 1 in place
  printf("Concatenation: %s\n", s1);
  len = strlen(s1);
  printf("Len after concat: %d\n", len);
  printf("String as array of chars: %s", select);
}
