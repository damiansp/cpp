#include <stdio.h>


int main(void) {
  const int SIZE = 5;
  int grades[SIZE] = {94, 84, 58, 59, 95};
  int i;
  double sum = 0.;

  printf("Class grades:\n");
  for (i = 0; i < SIZE; ++i) {
    printf("Next: %.d\t", grades[i]);
    sum += grades[i];
    printf("Sum is %.0f\n", sum);
  }
  printf("Class mean: %.2f\n", sum / SIZE);
  return 0;
}
