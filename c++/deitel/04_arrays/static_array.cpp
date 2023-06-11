#include <iostream>
using namespace std;


void init_static_array();
void init_automatic_array();


int main() {
  cout << "First call to each function:\n";
  init_static_array();
  init_automatic_array();
  cout << "\n\nSecond call:\n";
  init_static_array();
  init_automatic_array();
  cout << endl;
  return 0;
}


void init_static_array() {
  static int arr[3];
  int i;

  cout << "\nValues on entering init_static_array:\n";
  for (i = 0; i < 3; i++) {
    cout << "a1[" << i << "] = " << arr[i] << " ";
  }
  cout << "\nValues on exiting init_static_array:\n";
  for (i = 0; i < 3; i++) {
    cout << "a1[" << i << "] = " << (arr[i] += 5) << " ";
  }
}


void init_automatic_array() {
  int arr[3] = {1, 2, 3};
  int i;

  cout << "\nValues on entering init_automatic_array:\n";
  for (i = 0; i < 3; i++) {
    cout << "a2[" << i << "] = " << arr[i] << " ";
  }
  cout << "\nValues on exiting init_automatic_array:\n";
  for (i = 0; i < 3; i++) {
    cout << "a2[" << i << "] = " << (arr[i] += 5) << " ";
  }
}
