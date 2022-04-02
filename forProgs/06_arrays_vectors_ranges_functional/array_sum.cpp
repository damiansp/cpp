#include <array>
#include <iostream>
using namespace std;


int main() {
  array items{10, 20, 30, 40};
  int total{0};

  for (const int& item: items) {
    total += item;
  }
  cout << "Total: " << total << endl;
}
