#include <iostream>
using namespace std;


void print_chars(const char*);


int main() {
  char s[] = "just a spoonful of letters";

  cout << "S: " << endl;
  print_chars(s);
  cout << endl;
  return 0;
}


// sp cannott modify the characters it points to (is "read-only")
void print_chars(const char *sp) {
  for (; *sp != '\0'; sp++) {
    cout << *sp;
  }
}
