#include <stdio.h>


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void print_array(int len, int arr[]) {
  for (int i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}


void sort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    print_array(len, arr);
    printf("i = %d\n", i);
    for (int j = len - 1; j > i; j--) {
      if (arr[j - 1] > arr[j]) { swap(&arr[j - 1], &arr[j]); }
    }
  }
}


int main() {
  const int LEN = 10;
  int arr[LEN] = {45, 86, 74, 25, 98, 34, 50, 98, 250, 982};
  sort(arr, LEN);
}
