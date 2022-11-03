#include <stdio.h>


void print_array(int len, int arr[], char *str) {
  int i;
  printf("%s", str);
  for (i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
  }
}


void merge_sub(int sub_a[], int sub_b[], int merged[], int len) {
  /* sub_a and sub_b must be the same size; merged must be 2x the size of subs */
  int i = 0,
    j = 0,
    k = 0;
  while (i < len && j < len) {
    if (sub_a[i] < sub_b[j]) { merged[k++] = sub_a[i++]; }
    else { merged[k++] = sub_b[j++]; }
  }
  while (i < len) { merged[k++] = sub_a[i++]; }
  while (j < len) { merged[k++] = sub_b[j++]; }
}


void merge_sort(int key[], int len) {
  /* for this example, <len> expected to be a power of 2 */
  int j, k;
  int w[len];
  for (k = 1; k < len; k *= 2) {
    for (j = 0; j < len - k; j += 2*k) {
      merge_sub(key + j, key + j + k, w + j, k);
    }
    for (j = 0; j < len; j++) { key[j] = w[j]; }
  }
}


int main() {
  const int SIZE = 8;
  int arr[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};
  print_array(SIZE, arr, "A:\n");
  merge_sort(arr, SIZE);
  printf("\n");
  print_array(SIZE, arr, "Sorted:\n");
  printf("\n");
}
