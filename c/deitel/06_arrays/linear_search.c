#include <stdio.h>

#define SIZE 100


int search_linear(const int array[], int key, int size);


int main(void) {
  int a[SIZE];
  int i;
  int search_key;
  int elem;

  for (i = 0; i < SIZE; i++) { a[i] = 2 * i; }
  printf("Enter serach key: ");
  scanf("%d", &search_key);
  elem = search_linear(a, search_key, SIZE);
  if (elem != -1) { printf("Found %d at index %d\n", search_key, elem); }
  else { printf("Value %d not found\n", search_key); }
  return 0;
}


int search_linear(const int array[], int key, int size) {
  int i;

  for (i = 0; i < size; ++i) { if (array[i] == key) { return i; } }
  return -1;
}
