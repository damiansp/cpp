#include <stdio.h>


void try_to_modify_array(const int arr[]);


int main(void) {
  int a[] = {10, 20, 30};

  try_to_modify_array(a);
  printf("%d, %d, %d\n", a[0], a[1], a[2]);
  return 0;
}


void try_to_modify_array(const int arr[]) {
  arr[0] /= 2; // err
  arr[1] /= 2; // err
  arr[2] /= 2; // err
}
