#include <iostream>
using namespace std;


size_t get_size(double*);


int main() {
  double a[20];

  cout << "Bytes in array: " << sizeof(a)
       << "\nBytes returned from get_size(): " << get_size(a) << endl;
  return 0;
}


size_t get_size(double* p) { return sizeof(p); }
