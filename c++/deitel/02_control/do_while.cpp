#include <iostream>

using std::cout;
using std::endl;


int main() {
  int i = 1;

  do {
    cout << i << " ";
  } while (++i <= 10);
  cout << endl;
  return 0;
}
