#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>


int main() {
  double c6 = 0.,
    c5 = 0.,
    c4 = 0.,
    c3 = 0.,
    c2 = 0.,
    c1 = 0.,
    c0 = 0.,
    lower, upper;
  double width, xpos;
  double midvals, w, area;
  double ys[10002];
  int i, strips, degree;

  printf("Enter degree of polynomial (max 6): ");
  scanf("%d", &degree);
  switch (degree) {
    case 6:
      printf("Coef of x^6: ");
      scanf("%lf", &c6);
    case 5:
      printf("Coef of x^5: ");
      scanf("%lf", &c5);
    case 4:
      printf("Coef of x^4: ");
      scanf("%lf", &c4);
    case 3:
      printf("Coef of x^3: ");
      scanf("%lf", &c3);
    case 2:
      printf("Coef of x^2: ");
      scanf("%lf", &c2);
    case 1:
      printf("Coef of x: ");
      scanf("%lf", &c1);
    case 0:
      printf("Const: ");
      scanf("%lf", &c0);
      break;
    default:
      printf("No degree entered\n");
  }
  printf(
    "Equation:\n%lfx^6 + %lfx^5 + %lfx^4 + %lfx^3 + %lfx^2 + %lfx + %lf",
    c6, c5, c4, c3, c2, c1, c0);
  printf("Lower x limit: ");
  scanf("%lf", &lower);
  printf("Upper x limit: ");
  scanf("%lf", &upper);
  printf("N. partitions (max 1000): ");
  scanf("%d", &strips);
  if (strips > 1000) {
    printf("Too many partitions\n");
    return 1;
  }
  w = upper - lower;
  width = w / strips;
  ys[1] = (
    c6*pow(lower, 6)
    + c5*pow(lower, 5)
    + c4*pow(lower, 4)
    + c3*pow(lower, 3)
    + c2*pow(lower, 2)
    + c1*lower
    + c0);
  ys[strips + 1] = (
    c6*pow(upper, 6)
    + c5*pow(upper, 5)
    + c4*pow(upper, 4)
    + c3*pow(upper, 3)
    + c2*pow(upper, 2)
    + c1*upper
    + c0);
  midvals = 0;
  for (i = 1; i < strips; i++) {
    xpos = lower + i*width;
    ys[i + 1] = (
      c6*pow(xpos, 6)
      + c5*pow(xpos, 5)
      + c4*pow(xpos, 4)
      + c3*pow(xpos, 3)
      + c2*pow(xpos, 2)
      + c1*xpos
      + c0);
    midvals += ys[i + 1];
  }
  area = 0.5*width*(ys[1] + 2*midvals + ys[strips + 1]);
  printf("Area: %lf\n", area);
}
