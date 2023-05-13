#include <iostream>
using namespace std;


void draw_square(int n) {
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      cout << '*';
    }
    cout << endl;
  }
}


int main() {
  int n;
  cout << "Size of your square? > ";
  cin >> n;
  draw_square(n);
  return 0;
}
