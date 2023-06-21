#include <iostream>
using namespace std;


int search_linear(const int[], int, int);


int main() {
  const int SIZE = 100;
  int a[SIZE];
  int key,
    index;

  for (int i = 0; i < SIZE; i++) {
    a[i] = 2 * i;
  }
  cout << "Enter value to search for: ";
  cin >> key;
  index = search_linear(a, key, SIZE);
  if (index == -1) {
    cout << "Value not found.";
  } else {
    cout << "Value found at index " << index;
  }
  cout << endl;
  return 0;
}


int search_linear(const int arr[], int key, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}
