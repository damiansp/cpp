#include <cstring>
#include <iostream>
using namespace std;


int main() {
  char* s1 = " Happy New Year";
  char* s2 = " Happy New Year";
  char* s3 = " Happy Holidays";

  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << endl;
  cout << "\nstrcmp(s1, s2): " << strcmp(s1, s2);
  cout << "\nstrcmp(s1, s3): " << strcmp(s1, s3);
  cout << "\nstrcmp(s3, s1): " << strcmp(s3, s1);
  cout << "\nstrncmp(s1, s3, 6): " << strncmp(s1, s3, 6) << endl;
}
