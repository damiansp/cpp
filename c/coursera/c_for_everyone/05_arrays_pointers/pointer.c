#include <stdio.h>


int main(void) {
  const int SIZE = 5;
  int grades[SIZE] = {78, 82, 66, 93, 88};
  double sum = 0.;
  double *p_sum = &sum;
  int i;

  printf("Grades:\n");
  for (i = 0; i < SIZE; ++i) { printf("%d\t", grades[i]); }
  printf("\n");
  for (i = 0; i < SIZE; ++i) { sum += grades[i]; }
  printf("Mean grade: %.2f\n\n", sum  / SIZE);
  printf("Sum is at %p, (or %lu), and is %lf\n", p_sum, p_sum, *p_sum);
  printf("Grades are at %lu to %lu\n", grades, grades + 5*sizeof(int));
  return 0;
}
