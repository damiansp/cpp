#include <iostream>
using namespace std;

#include "string.h"


int main() {
  String s1("happy"), s2(" birthday"), s3;

  cout << "s1: \"" << s1 << "\"; s2: \"" << s2 << "\"; s3: \"" << s3 << "\""
       << "\ns2 == s1: " << (s2 == s1 ? "true" : "false")
       << "\ns2 != s1: " << (s2 != s1 ? "true" : "false")
       << "\ns2 > s1: " << (s2 > s1 ? "true" : "false")
       << "\ns2 < s1: " << (s2 < s1 ? "true" : "false")
       << "\ns2 >= s1: " << (s2 >= s1 ? "true" : "false")
       << "\ns2 <= s1: " << (s2 <= s1 ? "true" : "false");
  cout << "\n\nTesting !s3:\n";
  if (!s3) {
    cout << "s3 is empty; assigning s1 to s3...\n";
    s3 = s1;
    cout << "s3: \"" << s3 << "\"";
  }
  cout << "\n\ns1 += s2\ns1:";
  s1 += s2;
  cout << s1;
  cout << "\n\ns1 += \" to you\":\n";
  s1 += " to you";
  cout << s1 << "\n\n";
  cout << "s1(0, 14):\n" << s1(0, 14) << "\n\n";
  cout << "s1(15, 0):\n" << s1(15, 0) << "\n\n";

  String* s4p = new String(s1);
  cout << "*s4p: " << *s4p << "\n\n";
  *s4p = *s4p;
  cout << "*s4p: " << *s4p << "\n\n";
  delete s4p;
  s1[0] = 'H';
  s1[6] = 'B';
  cout << "Amended s1: " << s1 << "\n\n";
  cout << "Attempting to append 'd' to s1[30]...\n";
  s1[30] = '!';
  return 0;
}
