#include <iostream>
using namespace std;

#include "array.h"


int main() {
  cout << "# arrays: " << Array::get_array_count() << endl;
  Array ints1(7), ints2;
  cout << "# arrays: " << Array::get_array_count() << "\n\n";
  cout << "Size of ints1: " << ints1.len() << "\nAfter init:\n" << ints1
       << endl;
  cout << "Size of ints1: " << ints2.len() << "\nAfter init:\n" << ints1
       << endl;
  cout << "Input 17 ints:\n";
  cin >> ints1 >> ints2;
  cout << "After input:\n  ints1:\n" << ints1 << "\n  ints2\n" << ints2
       << endl;
  cout << "Evaluating:\n";
  if (ints1 != ints2) { cout << "  They are not equal" << endl; }
  else { cout << "  They are equal" << endl; }

  Array ints3(ints1);
  cout << "Size of ints3: " << ints3.len() << "\nAfter init:\n" << ints3
       << endl;
  cout << "Assigning ints2 to ints1:\n";
  ints1 = ints2;
  cout << " ints1:\n  " << ints1 << "\n ints2:\n  " << ints2 << endl;
  cout << "Evaluating:\n";
  if (ints1 != ints2) { cout << "  They are not equal" << endl; }
  else { cout << "  They are equal" << endl; }
  cout << "ints1[5]: " << ints1[5] << endl;
  cout << "Updating..." << endl;
  ints1[5] = 5555;
  cout << "ints1[5]: " << ints1[5] << endl;
  cout << "Atempting to assign 1515 to ints1[15]..." << endl;
  ints1[15] = 1515;
  return 0;
}
