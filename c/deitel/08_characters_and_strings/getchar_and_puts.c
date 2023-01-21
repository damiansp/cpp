#include <stdio.h>


int main(void) {
  char c;
  char sentence[80];
  int i = 0;

  puts("Enter a line of text: ");
  while ((c = getchar()) != '\n') { sentence[i++] = c; }
  sentence[i] = '\0';
  puts("You entered:");
  puts(sentence);
  return 0;
}
