#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>


int main() {
  double a, b, c, xa, xb, xra, xia;
  double bsq, four_ac;
  
  printf("Enter coef a (const term): ");
  scanf("%lf", &a);
  printf("Enter coef b (linear term): ");
  scanf("%lf", &b);
  printf("Enter coef c (quadratic term): ");
  scanf("%lf", &c);
  bsq = pow(b, 2);
  four_ac = 4 * a * c;
  if (bsq < four_ac) { // complex root
    xra  = -b / (2 * a);
    xia = sqrt(four_ac - bsq) / (2 * a);
    printf("Roots are %lf + %lfi, %lf - %lfi\n", xra, xia, xra, xia);
  } else {
    xa = (-b + sqrt(bsq - four_ac)) / (2 * a);
    xb = (-b - sqrt(bsq - four_ac)) / (2 * a);
    printf("Roots are %lf, %lf\n", xa, xb);
  }
  
  return 0;
}
