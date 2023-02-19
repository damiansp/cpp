#include <stdio.h>
#include <string.h>


int main() {
  char s1[17];
  char s2[] = "Copy this string";

  memcpy(s1, s2, 17);
  printf("After copying s2 to s1, s1 is:\n %s\n", s1);
}
