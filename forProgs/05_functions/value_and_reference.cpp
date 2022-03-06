#include <iostream>
using namespace std;


int square_by_val(int n) {
  return n *= n; // orig arg not modified
}


void square_by_ref(int& nref) {
  nref *= nref;
}


int main() {
  const int x{2};
  int z{4};

  cout << "x: " << x << endl;
  cout << "square_by_val(x): " << square_by_val(x) << endl;
  cout << "x: " << x << endl;

  cout << "z: " << z << endl;
  cout << "square_by_ref(z)..." << endl;
  square_by_ref(z);
  cout << "z: " << z << endl;
}
