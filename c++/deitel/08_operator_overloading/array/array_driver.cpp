#include <iostream>
using namespace std;

#include "array.h"


int main() {
  cout << "# arrays: " << Array::get_array_count() << endl;
  Array ints1(7), ints2;
  cout << "# arrays: " << Array::get_array_count() << "\n\n";
}
