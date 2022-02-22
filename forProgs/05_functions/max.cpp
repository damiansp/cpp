#include <iomanip>
#include <iostream>
using namespace std;


int maximum(int x, int y, int z) {
  int max{x};

  if (y > max) {
    max = y;
  }
  if (z > max) {
    max = z;
  }
  return max;
}


int main() {
  cout << "Enter 3 ints: ";
  int i1, i2, i3;
  cin >> i1 >> i2 >> i3;

  cout << "Max is: " << maximum(i1, i2, i3) << endl;
}
