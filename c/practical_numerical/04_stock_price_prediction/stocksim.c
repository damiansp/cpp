#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double randx();
void get_stats(double daily_vals[]);


int i, j, n;
// Normal CDF params
double c, d,
  c0 = 2.515517,
  c1 = 0.802853,
  c2 = 0.010328,
  d1 = 1.432788,
  d2 = 0.189269,
  d3 = 0.001308;
double q, f, y, t;
double mean, var, sd;
double sum = 0.,
  sum_of_square_devs = 0.;
double pdr_mean, pdr_var, pdr_sd, // "periodic" daily returns
  pdr_sum = 0.; 
double next_val, last_val;
double drift, eps, exp_test, ni_test;
double pdr[50];
time_t tim;


int main() {
  FILE *fp;
  const int N_DAYS = 50;
  const int N_DATA_POINTS = 19;
  // starts with yesterday's value and goes backward
  double daily_vals[N_DAYS] = {
    22.82, 22.51, 22.47, 22.05, 22.96, 21.43, 20.97, 20.46, 20.25, 20.46, 20.45,
    20.70, 20.31, 20.94, 20.85, 20.59, 20.65, 21.12, 20.78};
  double val, test_val;

  fp = fopen("asset.data", "w");
  srand((unsigned) time(&tim)); // seed randn gen
  for (i = 0; i < N_DAYS; i++) { pdr[i] = 0.; }
  for (i = N_DATA_POINTS; i < N_DAYS; i++) { daily_vals[i] = 0.; }
  n = N_DATA_POINTS;
  j = 0;
  // Write historical prices to output file
  for (i = N_DATA_POINTS - 1; i >= 0; i--) {
    fprintf(fp, "%d\t%lf\n", j++, daily_vals[i]);
  }
  // Calculate (log) daily returns
  for (j = 0; j < n - 1; j++) {
    pdr[j] = log(daily_vals[j] / daily_vals[j + 1]);
    pdr_sum += pdr[j];
  }
  pdr_mean = pdr_sum/ (double) (n - 1);  // casting unnecessary here
  get_stats(daily_vals);
  drift = pdr_mean - (pdr_var / 2);
  last_val = daily_vals[0];
  /* Model:
     Val[t] = Val[t - 1] * exp(drift + e) */
  for (i = N_DATA_POINTS; i < N_DATA_POINTS * 2; i++) {
    ni_test = randx();
    exp_test = exp(drift + pdr_sd*ni_test);
    next_val = last_val * exp_test;
    fprintf(fp, "%d\t%lf\n", i, next_val);
    last_val = next_val;
  }
  fclose(fp);
  return 0;
}


double randx() {
  /* Rand x from normal CDF:
     x = (t - c0 + c1t + c1t^2) / (1 + d1t + d2t^2 + d3t^3) */
  y = (rand() % 1000) / 1000;; // rand on [0, 1]
  q = (y >= 0.5) ? 1 - y : y;
  t = sqrt(log(1 / pow(q, 2)));
  c = c0 + c1*t + c2*pow(t, 2);
  d = 1 + d1*t + d2*pow(t, 2) + d3*pow(t, 3);
  f = t - (c/d);
  if (y < 0.5) { y = -1.*f; }
  else if (y > 0.5) { y = f; }
  else { y = 0; }
  return y;
}


void get_stats(double daily_vals[]) {
  // Calculate mean, sd, and var
  sum = 0.;
  sum_of_square_devs = 0.;
  for (i = 0; i < n; i++) { sum += daily_vals[i]; }
  mean = sum / (double)n;
  for (i = 0; i < n; i++) {
    sum_of_square_devs += pow((daily_vals[i] - mean), 2);
  }
  var = sum_of_square_devs / (double)n;
  // pdr var and sd
  sum_of_square_devs = 0.;
  for (i = 0; i < n - 1; i++) {
    sum_of_square_devs += pow((pdr[i] - pdr_mean), 2);
  }
  pdr_var = sum_of_square_devs / (double)(n - 1);
  sd = sqrt(var);
  pdr_sd = sqrt(pdr_var);
}
