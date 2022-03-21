#include <array>
#include <fmt/core.h>
#include <iostream>
using namespace std;


int main() {
  array<int, 5> vals;

  for (size_t i{0}; i < vals.size(); ++i) {
    vals[i] = 0;
  }
  cout << fmt::format("{:>7}{:>10}\n", "Element", "Value");
  for (size_t i{0}; i < vals.size(); ++i) {
    cout << fmt::format("\n{:>7}{:>10}\n", i, vals[i]);
  }
  cout << fmt::format("\n{:>7}{:>10}\n", "Element", "Value");
  for (size_t i{0}; i < vals.size(); ++i) {
    cout << fmt::format("{:>7}{:>10}\n", i, vals.at(i));
  }
  vals.at(10);
}
