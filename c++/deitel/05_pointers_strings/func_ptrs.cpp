#include <iomanip>
#include <iostream>
using namespace std;


void bubble_sort(int[], const int, bool (*)(int, int));
bool ascending(int, int);
bool descending(int, int);


int main() {
  const int SIZE = 10;
  int order,
    i,
    a[SIZE] = {43, 5, 19, 90, 97, 80, 99, 72, 8, 42};

  cout << "1 to sort ascending, 2 descending: ";
  cin >> order;
  cout << "\nOriginal order:\n";
  for (i = 0; i < SIZE; i++) { cout << setw(4) << a[i]; }
  if (order == 1) {
    bubble_sort(a, SIZE, ascending);
    cout << "\nAscending order:\n";
  } else {
    bubble_sort(a, SIZE, descending);
    cout << "\nDescending order:\n";
  } 
  for (i = 0; i < SIZE; i++) { cout << setw(4) << a[i]; }
  cout << endl;
  return 0;
}


void bubble_sort(int a[], const int size, bool (*compare)(int, int)) {
  void swap(int* const, int* const);

  for (int pass = 1; pass < size; pass++) {
    for (int i = 0; i < size - 1; i++) {
      if ((*compare)(a[i], a[i + 1])) { swap(&a[i], &a[i + 1]); }
    }
  }
}


void swap(int* const x, int* const y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


bool ascending(int a, int b) { return b < a; }  // swap if b < a


bool descending(int a, int b) { return b > a; }
