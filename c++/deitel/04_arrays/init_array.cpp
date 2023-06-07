#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  const int SIZE = 10;
  int i;
  int n[SIZE];
  int a[SIZE] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
  for (i = 0; i < SIZE; i++) {
    n[i] = i * i - i;
  }
  cout << "Element" << setw(13) << "Value" << endl;
  for (i = 0; i < SIZE; i++) {
    cout << setw(7) << i << setw(13) << n[i] << endl;
  }
  cout << endl;
  for (i = 0; i < SIZE; i++) {
    cout << setw(7) << i << setw(13) << a[i] << endl;
  }
  return 0;
}
