#include <iostream>
using namespace std;


int is_multiple(int a, int b) {
  return a % b == 0;
}


int main() {
  cout << "9 is a multiple of 3: " <<  (is_multiple(9, 3) ? "True" : "False")
       << endl;
  cout << "144 is a multiple of 12: "
       << (is_multiple(144, 12) ? "True" : "False") << endl;
  cout << "144 is a multiple of 14: "
       << (is_multiple(144, 14) ? "True" : "False") << endl;
  return 0;
}
