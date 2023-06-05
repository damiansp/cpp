#include <iostream>
using namespace std;


int triple_by_value(int x) {
  return 3 * x;
}


void triple_by_ref(int& x) {
  x *= 3;
}


int main() {
  int val = 3;
  cout << "val: " << val << endl;
  cout << "triple_by_value(val): " << triple_by_value(val) << endl;
  cout << "val: " << val << endl;
  cout << "Calling triple by ref...." << endl;
  triple_by_ref(val);
  cout << "val: " << val << endl;
  return 0;
}
