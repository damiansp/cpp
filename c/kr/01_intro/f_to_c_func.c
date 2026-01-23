#include <stdio.h>

double to_celsius(double f);


/* Print Fahrenheit-Celsius table */
int main() {
  int f;

  for (f = 0; f <= 300; f += 20) {
    printf("%3d %6.1f\n", f, to_celsius(f));
  }
}


double to_celsius(double fahrenheit) {
  return (5./9.) * (fahrenheit -32);
}
