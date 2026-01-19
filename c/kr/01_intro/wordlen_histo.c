#include <stdio.h>


int main() {
  int c, i, j, count;
  int word_lens[11];

  count = 0;
  for (i = 0; i < 11; ++i) { word_lens[i] = 0; }
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      // in word
      ++count;
    }
    else {
      // at word break
      if (count != 0) {
        if (count > 10) { count = 10; }
        ++word_lens[count];
        count = 0;
      }
    }
  }
  for (i = 1; i < 11; ++i) {
    printf(" %2d: ", i);
    for (j = 0; j < word_lens[i]; ++j) { printf("*"); }
    printf("\n");
  }
}
