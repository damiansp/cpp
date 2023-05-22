#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


int flip() {
  return rand() % 2;  
}


int main() {
  srand(time(0));
  int heads = 0,
    tails = 0;
  int result;
  const int N_FLIPS = 100;

  for (int f = 0; f < N_FLIPS; ++f) {
    result = flip();
    cout << (result == 0 ? "H " : "T ");
    if (result == 0) { heads++; }
    else { tails++; }
  }
  cout << "\nTotals:\n  Heads: " << heads << "\n  Tails: " << tails << endl;
  return 0;
}
