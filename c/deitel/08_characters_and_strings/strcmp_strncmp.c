#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "Happy New Year";
  const char* s2 = "Happy New Year";
  const char* s3 = "Happy Holidays";

  printf("s1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
  printf("s1 = s2: %2d\ns1 = s3: %2d\n", strcmp(s1, s2), strcmp(s1, s3));
  printf("s1[:6] = s3[:6]: %2d\n", strncmp(s1, s3, 6));
  printf("s1[:7] = s3[:7]: %2d\n", strncmp(s1, s3, 7));
  printf("s3[:7] = s1[:7]: %2d\n", strncmp(s3, s1, 7));
  return 0;
}
