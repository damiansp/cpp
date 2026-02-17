#include <stdio.h>


void squeeze_any(char remove[], char s[]);


int main() {
  char s[] = "The quick brown fox jumped over the lazy dogs.";
  char rm[] = "aeiou";
  printf("%s\n", s);
  printf("Remove: %s\n", rm);
  squeeze_any(rm, s);
  printf("%s\n", s);
}


/* delete any occurrences of any of the chars in <remove> from <s> */
void squeeze_any(char remove[], char s[]) {
  int sr, // read location in s
    sw,   // write location in s
    ri;   // index in remove
  int keep;  // boolean to determine if current letter should be kept

  sw = 0;
  for (sr = 0; s[sr] != '\0'; ++sr) {
    keep = 1;
    for (ri = 0; remove[ri] != '\0'; ++ri) {
      if (s[sr] == remove[ri]) {
        keep = 0;
        break;
      }
    }
    if (keep) {
      s[sw++] = s[sr];
    }
  }
  s[sw] = '\0';
}




