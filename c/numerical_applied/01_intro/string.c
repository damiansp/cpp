#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main() {
  char borrow[7] = {'b', 'o', 'r', 'r', 'o', 'w', '\0'};
  char s1[32] = "This is string1";
  char s2[16] = "This is string2";
  char s3[16];
  
  printf("strlen(s1): %lu\n", strlen(s1));
  printf("strlen(s2): %lu\n", strlen(s2));
  printf("strlen(s3): %lu\n", strlen(s3));
  strcpy(s3, s1);  // copy 1 into 3
  printf("strcpy(s3, s1); s3: %s\n", s3);
  printf("strlen(s3): %lu\n", strlen(s3));
  if (strcmp(s1, s3) == 0) { printf("s1 and s3 are the same\n"); }
  strcat(s1, s2);  // appends s2 to s1
  printf("strcat(s1, s2); s1: %s\n", s1);
  printf("strlen(s1): %lu\n", strlen(s1));
  printf("Char array is: %s\n", borrow);
  return 0;
}
