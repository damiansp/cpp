#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;


int main() {
  unsigned seed;

  cout << "Enter seed: ";
  cin >> seed;
  srand(seed);
  for (int i = 1; i <= 10; i++) {
    cout << setw(10) << rand()%6 + 1;
    if (i % 5 == 0) { cout << endl; }
  }

  return 0;
}
