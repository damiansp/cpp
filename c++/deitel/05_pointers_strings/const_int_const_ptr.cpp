#include <iostream>
using namespace std;


int main() {
  int x = 5,
    y;
  const int* const p = &x;

  cout << *p << endl;
  *p = 7;  // err: value cannot be modified
  p = &y;  // err: pointed at location cannot be modified
  return 0;
}
