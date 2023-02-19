#include <stdio.h>
#include <string.h>


int main() {
  char s[] = "This is a sentence with 7 tokens";
    
  printf("String s: %s\nTokens:\n", s);
  char* token_ptr = strtok(s, " ");

  while (token_ptr != NULL) {
    printf("  %s\n", token_ptr);
    token_ptr = strtok(NULL, " ");  // get next token
  }
  return 0;
}
