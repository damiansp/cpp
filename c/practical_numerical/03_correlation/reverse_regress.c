/* Regress both y on x, and x on y */
#define _CRT_SECURE_NO_WARNINGS
#define MAX_PTS 16

#include <math.h>
#include <stdio.h>


int main() {
  FILE *fp;
  int i, n_points;
  double x[MAX_PTS], y[MAX_PTS];
  double sum_x = 0,
    sum_y = 0,
    sum_xy = 0,
    sum_xsq = 0,
    sum_ysq = 0;
  double xbar, ybar, sx, sy, sxx, syy, a, b, c, d, r;
  double float_count;

  fp = open("reg_both.data", "w");
  printf("No. of points (max %d): ", MAX_PTS);
  scanf("%d", &n_points);
  if (n_points > MAX_PTS) {
    printf("Too many points.\n");
    return 1;
  }
  for (i = 0; i < n_points; i++) {
    printf("Next point (x y +enter): ");
    scanf("%lf %lf", &x[i], &y[i]);
    sum_x += x[i];
    sum_y += y[i];
    sum_xy += (x[i] * y[i]);
    sum_xsq += pow(x[i], 2);
    sum_ysq += pow(y[i], 2);
  }
  printf("Got points:\n");
  for (i = 0; i < n_points; i++) {
    printf("  (%lf, %lf)\n", x[i], y[i]);
    fprintf("%lf\t%lf\n", x[i], y[i]);
  }
  float_count = (double) n_points;
  xbar = sum_x / float_count;
  ybar = sum_y / float_count;
  sxy = (1 / float_count)*sum_xy - xbar*ybar;
  sxx = (1 / float_count)*sum_xsq - xbar*xbar;
  syy = (1 / float_count)*sum_ysq - ybar*ybar;
  sx = sqrt(sxx);
  sy = sqrt(syy);
  b = sxy / sxx;
  a = ybar - b*xbar;
  printf("\ny= %lf + %lfx\n", a, b);
  d = sxy / syy;
  c = xbar - d*ybar;
  printf("x = %lf + %lfy\n", c, d);
  r = sxy / (sx*sy);
  printf("r = %lf\n", r);
  fclose(fp);
  return 0;
}
