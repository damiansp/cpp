#include <iostream>
using namespace std;


int cube_by_val(int);


int main() {
  int n = 5;

  cout << "n: " << n << endl;
  n = cube_by_val(n);
  cout << "n^3: " << n << endl;
  return 0;
}


int cube_by_val(int n) {
  return n * n * n;
}
