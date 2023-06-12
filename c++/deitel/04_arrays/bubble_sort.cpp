#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  const int SIZE = 10;
  int a[SIZE] = {42, 36, 16, 40, 21,  9, 45, 32, 93, 24};
  int i, hold;

  cout << "Data:\n";
  for (i = 0; i < SIZE; i++) {
    cout << setw(4) << a[i];
  }
  for (int pass = 0; pass < SIZE - 1; pass++) {
    for (i = 0; i < SIZE - 1; i++) {
      if (a[i] > a[i + 1]) {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }
    }
  }
  cout << "\n\nSorted:\n";
  for (i = 0; i < SIZE; i++) {
    cout << setw(4) << a[i];
  }
  cout << endl;
  return 0;
}
