#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>


int main() {
  double a, b, c, xa, xb;
  double four_ac, bsq;

  printf("Solve a quadratic equation:\n");
  printf("Enter coefficient a: ");
  scanf("%lf", &a);
  printf("Enter coefficient b: ");
  scanf("%lf", &b);
  printf("Enter coefficient c: ");
  scanf("%lf", &c);
  four_ac = 4. * a * c;
  bsq = pow(b, 2);
  if (bsq < four_ac) { printf("Root is not real\n"); }
  else {
    xa = (-b + sqrt(bsq - four_ac)) / 2*a;
    xb = (-b - sqrt(bsq - four_ac)) / 2*a;
    printf("Roots are:\n  %lf\n  %lf\n", xa, xb);
  }
}
