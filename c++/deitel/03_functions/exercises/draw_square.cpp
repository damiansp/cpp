#include <iostream>
using namespace std;


void draw_square(int n, char c) {
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      cout << c;
    }
    cout << endl;
  }
}


int main() {
  int n;
  char c;
  cout << "Size of your square? > ";
  cin >> n;
  cout << "Drawing character? > ";
  cin >> c;
  draw_square(n, c);
  return 0;
}
