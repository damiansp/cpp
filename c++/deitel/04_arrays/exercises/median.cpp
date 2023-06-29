#include <iomanip>
#include <iostream>
using namespace std;


//const int N_RESPONSES = 9;
void bubble_sort(int x[], int size) {
  int temp;

  for (int pass = 1; pass < size; pass++) {
    for (int i = 0; i < size - 1; i++) {
      if (x[i] > x[i + 1]) {
        temp = x[i];
        x[i] = x[i + 1];
        x[i + 1] = temp;
      }
    }
  }
}


void median(int x[], int size) {
  cout << "****************\n     Median\n****************\n";
  bubble_sort(x, size);
  if (size % 2 == 0) {
    int first = x[size / 2 - 1];
    int second = x[size/2];
    cout << static_cast<double>(first + second) / 2.0 << "\n\n";
  }
  else {
    cout << x[size / 2] << "\n\n";
  }
}


int main() {
  int a3[3] = {1, 2, 3};
  int a4[4] = {1, 2, 3, 4};
  
  median(a3, 3);
  median(a4, 4);
  return 0;
}





