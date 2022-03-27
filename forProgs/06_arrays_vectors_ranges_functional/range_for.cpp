//#include <fmt/format.h>
#include <array>
#include <iostream>
using namespace std;


int main() {
  array items{1, 2, 3, 4, 5};

  cout << "items: ";
  for (const int& item: items) {
    cout << item << " ";
  }
  for (int& item: items) {
    item *= 2;
  }
  cout << "\nAfter multiplying by 2: ";
  for (const int& item: items) {
    cout << item << " ";
  }
  cout << "\n\nCalculating the cumulative sum of items:\n";
  for (int sum{0}; const int& item: items) {
    sum += item;
    cout << "Item: " << item << " cumsum: " << sum << endl;
  }
}
