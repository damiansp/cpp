#include <stdio.h>


int main(void) {
  char s1[20];
  char s2[] = "String literal";
  int i;

  printf("Enter a string: ");
  scanf("%s", s1);
  printf("s1 is: %s\ns2 is: %s\n", s1, s2);
  for (i = 0; s1[i] != '\0'; i++) {
    printf("%c ", s1[i]);
  }
  printf("\n");
  return 0;}
