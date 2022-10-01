#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int i, n;
// values for cum normal
double c,
  c0 = 2.515517,
  c1 = 0.802853,
  c2 = 0.010328,
  d1 = 1.432788,
  d2 = 0.189269,
  d3 = 0.001308;
double q, d, x, y, t;
double prob;
time_t tim;


int main() {
  printf("Enter a probability (on [0, 1]): ");
  scanf("%lf", &prob);
  if (prob < 0. || prob > 1.) {
    printf("Not a valid probability\n");
    return 1;
  }
  y = prob;  // why?
  q = (y > 0.5) ? 1 - y : y;
  t = sqrt(log(1 / pow(q, 2)));
  c = c0 + c1*t + c2*pow(t, 2);
  d = 1 + d1*t + d2*pow(t, 2) + d3*pow(t, 3);
  x = t - (c/d);
  if (y < 0.5) { y = -1.*x; }
  else if (y == 0.5) { y = 0; }
  else { y = x; }
  printf("For prob %lf:\n", prob);
  printf("  x = %lf\n", y);
  return 0;
}
