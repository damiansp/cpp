#include <stdio.h>

#define MAX_HW 20


void read_data(FILE* ptr, int d[], int* size) {
  *size = 0;

  while (fscanf(ptr, "%d", &d[*size]) == 1) {
    (*size)++;
  }
}


void print_data(int d[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\t", d[i]);
    if ((i + 1) % 10 == 0) {
      printf("\n");
    }
  }
}


double get_mean(int d[], int size) {
  double mean = 0.;

  for (int i = 0; i < size; i++) {
    mean += d[i];
  }
  return mean / size;
}


int main() {
  int i,
    sz = MAX_HW;
  FILE* ifp;
  int data[MAX_HW] = {100, 0};

  ifp = fopen("myhw.txt", "r");
  read_data(ifp, data, &sz);
  printf("Got %d values:\n ", sz);
  print_data(data, sz);
  printf("\n  Mean: %10.2f\n\n", get_mean(data, sz));
  fclose(ifp);
  return 0;
}
