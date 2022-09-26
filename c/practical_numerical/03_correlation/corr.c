#define _CRT_SECURE_NO_WARNINGS
#define MAX_POINTS 12

#include <math.h>
#include <stdio.h>


int main() {
  FILE *fp = fopen("corr.dat", "w");
  double x[MAX_POINTS], y[MAX_POINTS];
  double sigx = 0.,
    sigy = 0.,
    sigxy = 0.,
    sigxsq = 0.,
    sigysq = 0.,
    xbar,
    ybar;
  double float_count, sx, sy, sxy, sxx, syy, r;
  int i, n_points;

  printf("Enter no. of points (up to %d): ", MAX_POINTS);
  scanf("%d", &n_points);
  if (n_points > 12) {
    printf("Error. %d points max.\n", MAX_POINTS);
    return 1;
  }
  for (i = 0; i < n_points; ++i) {
    printf("Enter point (market-pct-change share-pct-change): ");
    scanf("%lf %lf", &x[i], &y[i]);
    sigx += x[i];
    sigy += y[i];
    sigxy += x[i] * y[i];
    sigxsq += pow(x[i], 2);
    sigysq += pow(y[i], 2);
  }
  printf("points:\n");
  for (i = 0; i < n_points; ++i) {
    printf("(%.3lf, %.3lf)\n", x[i], y[i]);
    fprintf(fp, "%lf\t%lf\n", x[i], y[i]);
  }
  float_count = (float) n_points;
  xbar = sigx / float_count;
  ybar = sigy / float_count;
  sxx = (1 / float_count)*sigxsq - xbar*xbar;
  syy = (1 / float_count)*sigysq - ybar*ybar;
  sx = sqrt(sxx);
  sy = sqrt(syy);
  sxy = (1 / float_count)*sigxy - xbar*ybar;
  r = sxy / (sx*sy);
  printf("r: %.3lf\n", r);
  fclose(fp);  
}
