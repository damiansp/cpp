#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  const int N = 9;
  int n[N] = {5, 17, 17, 18, 15, 3, 4, 1, 1};
  cout << "Element" << setw(13) << "Count" << setw(17) << "Histogram" << endl;
  for (int i = 0; i < N; i++) {
    cout << setw(7) << i << setw(13) << n[i] << setw(9);
    for (int j = 0; j < n[i]; j++) {
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}
