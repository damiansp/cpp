#include <cstdlib>
#include <iostream>
using namespace std;


int main() {
  int seed{0};

  cout << "Enter seed: ";
  cin >> seed;
  srand(seed);
  for (int i{0}; i < 10; ++i) {
    cout << (1 + rand() % 6) << " ";
  }
  cout << endl;
  return 0;
}
