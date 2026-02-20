#include <stdio.h>


int any(char search[], char s[]);


int main() {
  char s[] = "A man, a plan, a canal: Panama!";
  char sear1[] = "abc";
  char sear2[] = "def";
  char sear3[] = "ghijkl";

  printf("s: %s\n", s);
  printf("First instance of any of %s: %d\n", sear1, any(sear1, s));
  printf("First instance of any of %s: %d\n", sear2, any(sear2, s));
  printf("First instance of any of %s: %d\n", sear3, any(sear3, s));
}


/* Search the string <s> for any of the characters in <search> and return the
   index of the first such occurrence, or -1 if none found
*/
int any(char search[], char s[]) {
  int i, j;

  for (i = 0; s[i] != '\0'; ++i) {
    for (j = 0; search[j] != '\0'; ++j) {
      if (s[i] == search[j]) {
        return i;
      }
    }
  }
  return -1;
}

