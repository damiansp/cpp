#include <stdio.h>


void copy1(char *const s1, const char *const s2);
void copy2(char *s1, const char *s2);


int main(void) {
  char s1[10];
  char *s2 = "Hello";
  char s3[10];
  char s4[] = "Goodbye";

  copy1(s1, s2); // copy s2 to s1
  printf("s1: %s\n", s1);
  copy2(s3, s4); // copy s4 to s2
  printf("s3: %s\n", s3);
  return 0;
}


/* copy s2 to s1 using array notation */
void copy1(char *const s1, const char *const s2) {
  for (int i = 0; (s1[i] = s2[i]) != '\0'; i++) { ; }
}


/* copy s2 to s1 using pointer notation */
void copy2(char *s1, const char *s2) {
  for (; (*s1 = *s2) != '\0'; s1++, s2++) { ; }         
}
