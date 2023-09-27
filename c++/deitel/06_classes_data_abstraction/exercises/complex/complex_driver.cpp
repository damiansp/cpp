#include <iostream>
using namespace std;

#include "complex.h"


int main() {
  Complex im1 = Complex(2);
  Complex im2 = Complex(3, 4.1);
  Complex sum = im1.add(im2);

  cout << "im1 = ";
  im1.print();
  cout << "\nim2 = ";
  im2.print();
  cout << endl;
  im1.print();
  cout << " + ";
  im2.print();
  cout << " = ";
  sum.print();
  cout << endl;
  return 0;
}
