#include <stdio.h>
#include <string.h>


char* concat_n(const char* s1, const char* s2, int n, char s3[]) {
  strcat(s3, s1);
  strncat(s3, s2, n);
  return s3;
}


int main() {
  char* s1 = "Testing, testing. ";
  char* s2 = "One, two, three";
  char s3[22] = "";

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  concat_n(s1, s2, 3, s3);
  printf("s3: %s\n", s3);
}
