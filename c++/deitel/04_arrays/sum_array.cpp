#include <iostream>
using namespace std;


int main() {
  const int N = 12;
  int a[N] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
  int total = 0;
  for (int i = 0; i < N; i++) {
    total += a[i];
  }
  cout << "Sum of array: " << total << endl;
  return 0;
}
