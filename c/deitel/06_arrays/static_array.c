#include <stdio.h>

#define SIZE 3


void init_static_array(void);
void auto_init_array(void);


int main(void) {
  printf("First call to each function:\n");
  init_static_array();
  auto_init_array();
  printf("\n\nSecond call to each function:\n");
  init_static_array();
  auto_init_array();
  return 0;
}


void init_static_array(void) {
  static int a1[SIZE];
  int i;
  
  printf("\nValues on entering init_static:\n");
  for (i = 0; i < SIZE; i++) { printf("a1[%d]: %d ", i, a1[i]); }
  printf("\nValues on exiting init_static:\n");
  for (i = 0; i < SIZE; i++) { printf("a1[%d]: %d ", i, a1[i] += 5); }
}


void auto_init_array(void) {
  int a2[SIZE] = {1, 2, 3};
  int i;
  
  printf("\n\nValues on entering auto_init:\n");
  for (i = 0; i < SIZE; i++) { printf("a1[%d]: %d ", i, a2[i]); }
  printf("\nValues on exiting auto_init:\n");
  for (i = 0; i < SIZE; i++) { printf("a1[%d]: %d ", i, a2[i] += 5); }
}
