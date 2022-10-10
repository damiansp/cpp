#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


int main() {
  float c0 = 0.,
    c1 = 0.,
    c2 = 0.,
    c3 = 0.,
    c4 = 0.,
    c5 = 0.,
    c6 = 0.; // coefficients
  float lower, upper;
  double test_low, test_high, test_val, middle;
  int i, iterations, degree;

  printf("Enter degree of polynomial (max 6): ");
  scanf("%d", &degree);
  switch (degree) {
    case 6:
      printf("Enter coef for x^6: ");
      scanf("%f", &c6);
    case 5:
      printf("Enter coef for x^5: ");
      scanf("%f", &c5);
    case 4:
      printf("Enter coef for x^4: ");
      scanf("%f", &c4);
    case 3:
      printf("Enter coef for x^3: ");
      scanf("%f", &c3);
    case 2:
      printf("Enter coef for x^2: ");
      scanf("%f", &c2);
    case 1:
      printf("Enter coef for x: ");
      scanf("%f", &c1);
    case 0:
      printf("Enter constant term: ");
      scanf("%f", &c0);
      break;
    default:
      printf("default\n");
  }
  printf("Equation:\n");
  printf(
    "%fx^6 + %fx^5 + %fx^4 + %fx^3 + %fx^2 + %fx + %f = 0\n",
    c6, c5, c4, c3, c2, c1, c0);
  printf("Enter initial lower bound: ");
  scanf("%f", &lower);
  printf("Enter initial upper bound: ");
  scanf("%f", &upper);
  printf("No. iterations: ");
  scanf("%d", &iterations);
  test_low = lower;
  test_high = upper;
  for (i = 0; i < iterations; i++) {
    middle = (test_high + test_low) / 2;
    printf("  x appx: %f\n", middle);
    test_val = (
      c6*pow(middle, 6)
      + c5*pow(middle, 5)
      + c4*pow(middle, 4)
      + c3*pow(middle, 3)
      + c2*pow(middle, 2)
      + c1*middle
      + c0);
    if (test_val == 0) {
      printf("x = %f\n", middle);
      return 0;
    }
    if (test_val > 0) { test_high = middle; }
    else { test_low = middle; }
  }
  printf("x: %f\n", middle);
  
  return 0;
}
