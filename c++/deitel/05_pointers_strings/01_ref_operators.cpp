#include <iostream>
using namespace std;


int main() {
  int a = 7;
  int* a_p = &a;

  cout << "&a: " << &a << "\na_p: " << a_p;
  cout << "\n\na: " << a << "\n*a_p: " << *a_p;
  cout << "\n\n&*a_p: " << &*a_p << "\n*&a_p: " << *&a_p << endl;
  return 0;
}
