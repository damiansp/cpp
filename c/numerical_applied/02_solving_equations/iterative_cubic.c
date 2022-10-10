#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

/* Solve x^3 + 2x^2 - x = 0 by iterative trial and error */
int main() {
  // curve should cross x-axis
  float p1 = -1.,    // coef for linear term
    p2 = 2.,         // coef for squared term
    p3 = 1.,         // coef for cubic term
    const_val = 0,   // const term
    lower,           // value of x where curve below x-axis
    upper;           // above x-axis
  double test_low, test_high, test_val, middle;
  int i, iterations;

  printf("Enter initial lower value: ");
  scanf("%f", &lower);
  printf("And initial upper: ");
  scanf("%f", &upper);
  printf("No. of iterations: ");
  scanf("%d", &iterations);
  test_low = lower;
  test_high = upper;
  printf(
    "Equation is : %fx^3 + %fx^2  + %fx + %f = 0\n", p3, p2, p1, const_val);
  for (i = 0; i < iterations; i++) {
    middle = (test_high + test_low) / 2;
    printf("  x appx: %f\n", middle);
    test_val = p3*pow(middle, 3) +  p2*pow(middle, 2) + p1*middle + const_val;
    if (test_val == 0) {
      printf("x = %f\n", middle);
      return 0;
    }
    if (test_val > 0) {
      test_high = middle;
    } else {
      test_low = middle;
    }
  }
  printf("x = %f\n", middle);
  
  return 0;
}
