#define _CRT_SECURE_NO_WARNINGS
#define MAX_POINTS 12

#include <stdio.h>
#include <math.h>


int main() {
  FILE *fp;
  float xs[MAX_POINTS],
    ys[MAX_POINTS];
  float sig_x = 0.,
    sig_y = 0.,
    sig_xy = 0.,
    sig_xsq = 0.,
    x_bar,
    y_bar;
  float n_points_float,
    s_xy,
    s_xx,
    a,
    b;
  int i, n_points;

  fp = fopen("regress_y_on_x.dat", "w");
  printf("Enter no. of points (max %d):\n", MAX_POINTS);
  scanf("%d", &n_points);

  if (n_points > MAX_POINTS) {
    printf("Too many points.");
    return 1;
  }
  for (i = 0; i < n_points; ++i) {
    printf("Enter point ('x y' +return): ");
    scanf("%f %f", &xs[i], &ys[i]);
    sig_x += xs[i];
    sig_y += ys[i];
    sig_xy += (xs[i] * ys[i]);
    sig_xsq += (float) pow(xs[i], 2);
  }

  printf("Got the following points:\n");
  for (i = 0; i < n_points; ++i) {
    printf("  (%.1f, %.1f)\n", xs[i], ys[i]);
    fprintf(fp, "%lf\t%lf\n", xs[i], ys[i]);
  }
  n_points_float = (float) n_points;
  x_bar = sig_x / n_points_float;
  y_bar = sig_y / n_points_float;
  s_xy = (1 / n_points_float)*sig_xy - x_bar*y_bar;
  s_xx = (1 / n_points_float)*sig_xsq - x_bar*x_bar;
  b = s_xy / s_xx;
  a = y_bar - b*x_bar;
  printf("Regression equation:\n");
  printf("   y = %f + %fx\n", a, b);
  fclose(fp);  
  return 0;
}
