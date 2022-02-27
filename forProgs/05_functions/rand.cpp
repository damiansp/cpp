#include <cstdlib>
#include <iostream>
using namespace std;


int main() {
  for (int i{0}; i < 10; ++i) {
    cout << (1 + rand() % 6) << " ";
  }
  cout << endl;
  return 0;
}
