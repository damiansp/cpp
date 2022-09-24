#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>


int main() {
  FILE *fp = fopen("capm.dat", "w");
  float x[12], y[12];
  float sigx = 0.,
    sigy = 0.,
    sigxy = 0.,
    sigxsq = 0.,
    xbar,
    ybar;
  float float_count, sxy, sxx, a, b;
  int i, n_points;

  printf("Enter no. of points (up to 12): ");
  scanf("%d", &n_points);
  if (n_points > 12) {
    printf("Error. 12 points max.\n");
    return 1;
  }
  for (i = 0; i < n_points; ++i) {
    printf("Enter point (market-pct-change share-pct-change): ");
    scanf("%f %f", &x[i], &y[i]);
    sigx += x[i];
    sigy += y[i];
    sigxy += x[i] * y[i];
    sigxsq += (float) pow(x[i], 2);
  }
  printf("points:\n");
  for (i = 0; i < n_points; ++i) {
    printf("(%.3f, %.3f)\n", x[i], y[i]);
    fprintf(fp, "%lf\t%lf\n", x[i], y[i]);
  }
  float_count = (float) n_points;
  xbar = sigx / float_count;
  ybar = sigy / float_count;
  sxy = (1 / float_count)*sigxy - xbar*ybar;
  sxx = (1 / float_count)*sigxsq - xbar*xbar;
  b = sxy / sxx;
  a = ybar - b*xbar;
  printf("y = %.3fx + %.3f\n", a, b);
  printf("Beta = %.3f\n", b);
  fclose(fp);  
}
