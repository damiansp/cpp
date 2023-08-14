#include <cstring>
#include <iostream>
using namespace std;


int main() {
  char* s1 = "abcdefghijklmnopqrstuvwxyz";
  char* s2 = "four";
  char* s3 = "Boston";

  cout << s1 << ": " << strlen(s1) << endl
       << s2 << ": " << strlen(s2) << endl
       << s3 << ": " << strlen(s3) << endl;
  return 0;
}
