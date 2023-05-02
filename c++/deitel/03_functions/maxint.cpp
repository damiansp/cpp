#include <iostream>

using namespace std;


int max(int, int, int);


int main() {
  int a, b, c;
  cout << "Enter 3 integers: ";
  cin >> a >> b >> c;
  cout << "max(" << a << ", " << b << ", " << c << ") = "
       << max(a, b, c) << endl;
  return 0;
}


int max(int x, int y, int z) {
  int max = x;
  if (y > max) { max = y; }
  if (z > max) { max = z; }
  return max;  
}
