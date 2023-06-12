#include <iomanip>
#include <iostream>
using namespace std;


void modify_array(int[], int);
void modify_element(int);


int main() {
  const int SIZE = 5;
  int i;
  int a[SIZE] = {0, 1, 2, 3, 4};

  cout << "Passing entire array call-by-ref:\n\nArray values:\n";
  for (i = 0; i < SIZE; i++) {
    cout << setw(3) << a[i];
  }
  cout << endl;
  modify_array(a, SIZE);
  cout << "Modified array:\n";
  for (i = 0; i < SIZE; i++) {
    cout << setw(3) << a[i];
  }
  cout << "\n\n\nPassing an element call-by-value:\n\na[3] = " << a[3] << endl;
  modify_element(a[3]);
  cout << "a[3] = " << a[3] << endl;
  return 0;
}


void modify_array(int a[], int size) {
  for (int i = 0; i < size; i++) {
    a[i] *= 2;
  }
}


void modify_element(int e) {
  cout << "Value in modify_element: " << (e *= 2) << endl;
}
