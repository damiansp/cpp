#include <array>
#include <iostream>
using namespace std;


int main() {
  constexpr size_t arraySize{5};
  array<int, arraySize> values{};

  for (size_t i{0}; i < values.size(); ++i) {
    values.at(i) = 2*i + 2;
  }
  for (const int& val: values) {
    cout << val << " ";
  }
  cout << endl;
}
