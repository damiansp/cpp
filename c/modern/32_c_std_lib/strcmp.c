#include <stdio.h>
#include <string.h>


int main(void) {
  const char *s1 = "Hello, World!";
  const char *s2 = "Hello, World!";
  const char *s3 = "Hi, Earth!";
  if (strcmp(s1, s2) == 0) { printf("s1 = s2\n"); }
  else { printf("s1 != s2\n"); }
  if (strcmp(s1, s3) == 0) { printf("s1 = s3\n"); }
  else { printf("s1 != s3\n"); }
}
