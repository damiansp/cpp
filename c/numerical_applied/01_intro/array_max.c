#include <stdio.h>

double find_max(double arr[]);


int main() {
  double max;
  double arr[] = {12.3, 45.6, 78.9, 1.2, 34.5, 67.8, 89.0, 1.23, 4.56, 7.89};

  max = find_max(arr);
  printf("Max was: %.2f\n", max);
  return 0;
}


double find_max(double arr[]) {
  int i;
  double max = arr[0];
  for (i = 1; i < 10; ++i) {
    if (arr[i] > max) { max = arr[i]; }
  }
  return max;
}
