#include <stdio.h>


void print_array(int len, int arr[], char *str) {
  int i;
  printf("%s", str);
  for (i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
  }
}


void merge_sort(int sub_a[], int sub_b[], int merged[], int len) {
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


int main() {
  const int SIZE = 5;
  int sub_a[SIZE] = {67, 82, 83, 88, 99};
  int sub_b[SIZE] = {58, 69, 72, 81, 88};
  int merged[2 * SIZE];
  print_array(SIZE, sub_a, "A:\n");
  print_array(SIZE, sub_b, "\nB:\n");
  merge_sort(sub_a, sub_b, merged, SIZE);
  print_array(2 * SIZE, merged, "\nMerged:\n");
  printf("\n");
}
