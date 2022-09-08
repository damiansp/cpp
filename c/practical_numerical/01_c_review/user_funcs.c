#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void compare(int a, int b);
double get_max(double array[]);


int main() {
  int first, second, third;

  printf("Please enter an int: ");
  scanf("%d", &first);
  printf("...and another: ");
  scanf("%d", &second);
  printf("...and one more: ");
  scanf("%d", &third);
  compare(first, second);
  compare(first, third);
  compare(second, third);

  double grades[] = {10.6, 23.7, 67.9, 93.0, 64.2, 33.8, 57.5, 82.2, 50.7, 4.7};
  double top_grade = get_max(grades);

  printf("The top grade in the class was %.1f\n", top_grade);
  return 0;
}


void compare(int a, int b) {
  if (a > b) {
    printf("%d > %d\n", a, b);
  } else if (a < b) {
    printf("%d < %d\n", a, b);
  } else {
    printf("%d = %d\n", a, b);
  }
}


double get_max(double array[]) {
  int i;
  double max = 0.;

  for (i = 0; i < 10; ++i) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}
