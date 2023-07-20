#include <iomanip>
#include <iostream>
using namespace std;


void bubble_sort(int*, const int);


int main() {
  const int SIZE = 10;
  int a[SIZE] = {22, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  int i;

  cout << "Data:\n";
  for (i = 0; i < SIZE; i++) { cout << setw(4) << a[i]; }
  cout << endl;
  bubble_sort(a, SIZE);
  for (i = 0; i < SIZE; i++) { cout << setw(4) << a[i]; }
  cout << endl;
  return 0;
}


void bubble_sort(int* arr, const int SIZE) {
  void swap(int* const, int* const);

  for (int pass = 0; pass < SIZE - 1; pass++) {
    for (int j = 0; j < SIZE - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}


void swap(int* const x, int* const y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
