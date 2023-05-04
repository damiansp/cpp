#include <iostream>
using namespace std;


int square_by_val(int);
void square_by_ref(int&);


int main() {
  int x = 2,
    z = 4;

  cout << "x = " << x << endl;
  cout << "square_by_val(x) = " << square_by_val(x) << endl;
  cout << "x = " << x << endl;
  cout << "\nz = " << z << endl;
  cout << "Calling square_by_ref(z)..." << endl;
  square_by_ref(z);
  cout << "z = " << z << endl;
  return 0;
}


int square_by_val(int a) {
  a *= a;
  return a;
}


void square_by_ref(int& nref) {
  nref *= nref;
}
