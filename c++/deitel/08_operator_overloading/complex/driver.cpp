#include <iostream>
using namespace std;

#include "complex.h"


int main() {
  Complex x, y(4.2, 8.3), z(3.3, 1.1);

  cout << "x: ";
  x.print();
  cout << "\ny: ";
  y.print();
  cout << "\nz: ";
  z.print();

  x = y + z;
  cout << "\n\nx = y + z: \n";
  x.print();
  cout << " = ";
  y.print();
  cout << " + ";
  z.print();

  x = y - z;
  cout << "\n\nx = y - z: \n";
  x.print();
  cout << " = ";
  y.print();
  cout << " - ";
  z.print();
  cout << endl;
  
  return 0;
}
