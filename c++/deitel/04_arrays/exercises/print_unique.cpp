#include <iostream>
using namespace std;


const int LOWER = 0;
const int UPPER = 20;
const int RANGE = UPPER - LOWER + 1;  // inclusive

void print_unique(int x[], int size) {
  int values[RANGE] = {0};
  
  for (int i = 0; i < size; i++) {
    if (values[x[i]]++ == 0) {
      cout << x[i] << " ";
    }
  }
  cout << endl;
}


int main() {
  const int N = 20;
  int a1[N] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  int a2[N] = {0};
  int a3[N] = {
    1, 1, 0, 0, 2, 0, 0, 2, 1, 0, 0, 0, 0, 0, 1, 0, 3, 1, 0, 2};

  print_unique(a1, N);
  print_unique(a2, N);
  print_unique(a3, N);
  return 0;
}
