#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


int main() {
  string w1;
  string w2;
  cout << "Enter a word: ";
  cin >> w1;
  cout << "And another: ";
  cin >> w2;
  if (w1.length() < w2.length()) {
    cout << w2 << " is longer\n";
  } else if (w1.length() > w2.length()) { 
    cout << w1 << " is longer\n";
  } else {
    cout << w1 << " and " << w2 << " are the same length\n";
  }
  return 0;
}

