#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "abcdefghijklmnopqrstuvwxyz";
  const char* s2 = "four";
  const char* s3 = "Boston";

  printf("len(%s): %lu\n", s1, strlen(s1));
  printf("len(%s): %lu\n", s2, strlen(s2));
  printf("len(%s): %lu\n", s3, strlen(s3));
}
