#include <iomanip>
#include <iostream>
using namespace std;


int search_binary(const int[], int, int, int, int);
void print_header(int);
void print_row(const int[], int, int, int, int);


int main() {
  const int SIZE = 15;
  int a[SIZE];
  int key,
    index;

  for (int i = 0; i < SIZE; i++) {
    a[i] = 2 * i;
  }
  cout << "Enter a number between 0 and 28: ";
  cin >> key;
  print_header(SIZE);
  index = search_binary(a, key, 0, SIZE - 1, SIZE);
  if (index == -1) {
    cout << "\nValue not found";
  } else {
    cout << "\n" << key << " found at index " << index;
  }
  cout << endl;
  return 0;
}


int search_binary(const int a[], int key, int low, int high, int size) {
  int mid;
  
  while (low <= high) {
    mid = (low + high) / 2;
    print_row(a, low, mid, high, size);
    if (key == a[mid]) {
      return mid;
    } else if (key < a[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}


void print_header(int size) {
  int i;

  cout << "\nIndex:\n";
  for (i = 0; i < size; i++) {
    cout << setw(3) << i << ' ';
  }
  cout << endl;
  for (i = 1; i <= 4 * size; i++) {
    cout << '-';
  }
  cout << endl;
}


void print_row(const int a[], int low, int mid, int high, int size) {
  for (int i = 0; i < size; i++) {
    if (i < low || i > high) {
      cout << "    ";
    } else if (i == mid) {
      cout << setw(3) << a[i] << '*';
    } else {
      cout << setw(3) << a[i] << ' ';
    }
  }
  cout << endl;
}
