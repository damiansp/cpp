#include <stdio.h>
#define SIZE 20


int search_binary(const int arr[], int search_key, int low, int high);
void print_header(void);
void print_row(const int arr[], int low, int mid, int high);


int main(void) {
  int arr[SIZE];
  int i;
  int key;
  int res;

  for (i = 0; i < SIZE; i++) { arr[i] = 2 * i; }
  printf("Enter a number between 0 and %d: ", 2 * (SIZE - 1));
  scanf("%d", &key);
  print_header();
  res = search_binary(arr, key, 0, SIZE - 1);
  if (res == -1) { printf("\n%d not found\n", key); }
  else { printf("\n%d found at index %d\n", key, res); }
  
  return 0;
}


int search_binary(const int arr[], int search_key, int low, int high) {
  int middle;

  while (low <= high) {
    middle = (low + high) / 2;
    print_row(arr, low, middle, high);
    if (search_key == arr[middle]) { return middle; }
    else if (search_key < arr[middle]) { high = middle - 1; }
    else { low = middle + 1; }
  }
  return -1;
}


void print_header(void) {
  int i;
  
  printf("\nSubscripts:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d ", i); }
  printf("\n");
  for (i = 1; i <= 4 * SIZE; i++) { printf("-"); }
  printf("\n");
}


void print_row(const int arr[], int low, int mid, int high) {
  int i;

  for (i = 0; i < SIZE; i++) {
    if (i < low || i > high) { printf("    "); }
    else if (i == mid) { printf("%3d*", arr[i]); }
    else { printf("%3d ", arr[i]); }
  }
  printf("\n");
}
