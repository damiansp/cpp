#include <stdio.h>
#include <string.h>


int main() {
  const char* s1 = "The value is 3.14159";
  const char* s2 = "1234567890";

  printf(
    "s1 = %s\ns2 = %s\nThe length of s1 containing no chars from s2 is %lu\n",
    s1, s2, strcspn(s1, s2));
}
