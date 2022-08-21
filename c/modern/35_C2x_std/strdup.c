#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  const char *s1 = "String to duplicate.";
  char *s2 = strdup(s1);
  //char *s3 = strdup(s1, 6); // not implemented
  printf("The first result is: '%s'\n", s2);
  free(s2);
  //printf("The other result is: '%s'\n", s3);
  //free(s3);
}
