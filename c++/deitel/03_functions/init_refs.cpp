#include <iostream>
using namespace std;


int main() {
  int x = 3,
    &y = x;  // must be initialized

  cout << "x = " << x << "\ny = " << y << endl;
  cout << "Changing y to 7" << endl;
  y = 7;
  cout << "x = " << x << "\ny = " << y << endl;
  return 0;
}
