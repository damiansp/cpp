#include <stdio.h>

#define SIZE 5


void modify_array(int b[], int size);
void modify_element(int e);


int main(void) {
  int a[SIZE] = {0, 1, 2, 3, 4};
  int i;

  printf(
    "Effects of passing an entire array by reference:\n\nThe values of the "
    "original are:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  printf("\n");
  modify_array(a, SIZE);
  printf("The values of the modified array are:\n");
  for (i = 0; i < SIZE; i++) { printf("%3d", a[i]); }
  printf(
    "\n\nEffects of passing an array element by value:\n\nThe value of a[3] is "
    "%d\n",
    a[3]);
  modify_element(a[3]);
  printf("The value of a[3] is %d\n", a[3]);
  return 0;
}


void modify_array(int b[], int size) {
  for (int i = 0; i < size; i++) { b[i] *= 2 ; }
}


void modify_element(int e) {
  e *= 2;
  printf("Value in modify_element is %d\n", e);
}
