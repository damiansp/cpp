#include <cstring>
#include <iostream>
using namespace std;


int main() {
  char s[] = "This is a sentence with 7 tokens";
  char* token_p;

  cout << "s:\n" << s << endl;
  token_p = strtok(s, " ");
  cout << "Tokens:\n";
  while (token_p != NULL) {
    cout << "   " << token_p << '\n';
    token_p = strtok(NULL, " ");
  }
  return 0;
}
