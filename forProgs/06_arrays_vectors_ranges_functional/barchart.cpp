#include <array>
#include <iostream>
using namespace std;


int main() {
  constexpr array freqs{0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

  cout << "Distribution:\n";
  for (int i{0}; const int& freq: freqs) {
    if (i < 10) {
      cout << i * 10 << "-" << i*10 + 9 << ": ";
    } else {
      cout << "  100: ";
    }
    ++i;
    for (int stars{0}; stars < freq; ++stars) {
      cout << '*';
    }
    cout << endl;
  }
}
