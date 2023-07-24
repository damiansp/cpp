#include <iostream>
using namespace std;


int main() {
  int a[] = {10, 20, 30, 40};
  int i, offset;
  int* a_p = a;

  cout << "Array a printed using subscripts:\n";
  for (i = 0; i < 4; i++) {
    cout << "a[" << i << "]: " << a[i] << endl;
  }
  cout << "\nUsing pointer/offset:\n";
  for (offset = 0; offset < 4; offset++) {
    cout << "*(a + " << offset << "): " << *(a + offset) << endl;
  }
  cout << "\nUsing pointer/subscript:\n";
  for (i = 0; i < 4; i++) {
    cout << "a_p[" << i << "]: " << a_p[i] << endl;
  }
  cout << "\nUsing diff pointer/offset:\n";
  for (offset = 0; offset < 4; offset++) {
    cout << "*(a_p + " << offset << "): " << *(a_p + offset) << endl;
  }
  return 0;
}
