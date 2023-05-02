#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;


int main() {
  const int N_ROLLS = 6000;
  int f1 = 0,  // frequency of 1s, etc
    f2 = 0,
    f3 = 0,
    f4 = 0,
    f5 = 0,
    f6 = 0;
  int face;

  for (int roll = 1; roll <= N_ROLLS; roll++) {
    face = rand()%6 + 1;
    switch (face) {
      case 1:
        f1++; break;
      case 2:
        f2++; break;
      case 3:
        f3++; break;
      case 4:
        f4++; break;
      case 5:
        f5++; break;
      case 6:
        f6++; break;
      default:
        cout << "if you see this, your code is broken" << endl;
    }
  }
  cout << "Face" << setw(13) << "Frequency"
       << "\n   1" << setw(13) << f1
       << "\n   2" << setw(13) << f2
       << "\n   3" << setw(13) << f3
       << "\n   4" << setw(13) << f4
       << "\n   5" << setw(13) << f5
       << "\n   6" << setw(13) << f6 << endl;
  return 0;
}
