#include <stdio.h>


/* Print Fahrenheit-Celsius table */
int main() {
  int f;

  for (f = 0; f <= 300; f += 20) {
    printf("%3d %6.1f\n", f, (5./9.) * (f - 32));
  }
}
