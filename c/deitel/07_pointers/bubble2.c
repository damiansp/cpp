#include <stdio.h>

#define SIZE 10


void print_array(int a[SIZE]);
void bubble(int x[], const int size, int (*compare)(int a, int b));
int is_ascending(int a, int b);
int is_descending(int a, int b);


int main(void) {
  int order; // 1: ascending; 2: descending
  int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  int (*f)(int, int);
  printf("Sort:\n 1) ascending\n 2) descending\n> ");
  scanf("%d", &order);
  printf("Before sorting:\n");
  print_array(a);

  f = order == 1 ? is_ascending : is_descending;
  bubble(a, SIZE, f);
  printf("\nSorted:\n");
  print_array(a);
  printf("\n");
  return 0;
}


void print_array(int a[SIZE]) {
  for (int i = 0; i < SIZE; i++) { printf("%5d", a[i]); }
}


void bubble(int x[], const int size, int (*compare)(int a, int b)) {
  void swap(int *e1, int *e2);
  int n_passes;
  int i;

  for (n_passes = 1; n_passes < size; n_passes++) {
    for (i = 0; i < size - 1; i++) {
      if ((*compare)(x[i], x[i + 1])) { swap(&x[i], &x[i + 1]); }
    }
  }
}


void swap(int *e1, int *e2) {
  int tmp = *e1;
  *e1 = *e2;
  *e2 = tmp;
}


int is_ascending(int a, int b) { return b < a; }


int is_descending(int a, int b) { return b > a; }
