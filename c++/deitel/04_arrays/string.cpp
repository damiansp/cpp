#include <iostream>
using namespace std;


int main() {
  char s1[20];
  char s2[] = "String literal";
  cout << "Enter a two-word string: ";
  cin >> s1;
  cout << "s1: " << s1 << "\ns2: " << s2 << endl;
  for (int i = 0; s1[i] != '\0'; i++) {
    cout << s1[i] << ' ';
  }
  cin >> s1;
  cout << "\ns1: " << s1 << endl;
  return 0;
}
