#include <iostream>
using namespace std;


void copy1(char*, const char*);
void copy2(char*, const char*);


int main() {
  char s1[10];
  char* s2 = "Hello";
  char s3[10];
  char s4[] = "Good Bye";

  copy1(s1, s2); // copy s2 into s1
  cout << "s1: " << s1 << endl;
  copy2(s3, s4);
  cout << "s3: " << s3 << endl;
  return 0;
}


void copy1(char* s1, const char* s2) {
  for (int i = 0; (s1[i] = s2[i]) != '\0'; i++) { ; }
}


void copy2(char* s1, const char* s2) {
  for (; (*s1 = *s2) != '\0'; s1++, s2++) { ; }
}
