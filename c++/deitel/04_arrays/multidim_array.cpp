#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;


void print_array(int[][COLS]);


int main() {
  int a1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
  int a2[ROWS][COLS] = {1, 2, 3, 4, 5};
  int a3[ROWS][COLS] = {{1, 2}, {4}};

  cout << "Arrays:" << endl;
  print_array(a1);
  cout << endl;
  print_array(a2);
  cout << endl;
  print_array(a3);
  cout << endl;
  return 0;
}


void print_array(int a[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}
