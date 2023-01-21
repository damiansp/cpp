#include <stdio.h>


void reverse(const char* const sPtr);


int main(void) {
  char sentence[80];

  printf("Enter a line of text:\n> ");
  gets(sentence);  // reads a line of text
  printf("\nThe line reversed:\n");
  reverse(sentence);
  printf("\n");
  return 0;
}


void reverse(const char* const sPtr) {
  if (sPtr[0] == '\0') { return; }
  else {
    reverse(&sPtr[1]);
    putchar(sPtr[0]);
  }
}
