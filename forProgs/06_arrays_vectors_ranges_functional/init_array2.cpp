#include <array>
#include <fmt/format.h>
#include <iostream>
using namespace std;


int main() {
  array<int, 5> vals{1, 2, 3, 5};
  for (size_t i{0}; i < vals.size(); ++i) {
    cout << fmt::format("{} ", vals.at(i));
  }
  cout << "\n\n";
  array vals2{1.1, 2.2, 3.3, 5.5};
  for (size_t i{0}; vals.size(); ++i) {
    cout << fmt::format("{}  ", vals.at(i));
  }
  cout "\n";
}
