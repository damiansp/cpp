/* Uses https://github.com/fmtlib/fmt */
#include <iostream>
#include <format>
//#include "fmt/format.h"
using namespace std;


int main() {
  string student{"Bob"};
  int grade{89};

  cout << format("{}'s grade is {}", student, grade) << endl;
  return 0;
}
