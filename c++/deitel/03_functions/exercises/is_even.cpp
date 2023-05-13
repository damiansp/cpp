#include <iostream>
using namespace std;


inline bool is_even(int n) { return n % 2 == 0; }


int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < 10; ++i) {
    cout << "is_even(" << arr[i] << "): "
         << (is_even(arr[i]) ? "True" : "False") << endl;
  }

  return 0;
}
