#include <stdio.h>
#include <string.h>


char* concat(const char* s1, const char* s2, char s3[]) {
  strcat(s3, s1);
  strcat(s3, s2);
  return s3;
}


int main() {
  char* s1 = "Testing, testing. ";
  char* s2 = "One, two, three";
  char s3[34];

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  concat(s1, s2, s3);
  printf("s3: %s\n", s3);
}
