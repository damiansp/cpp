#include <stdio.h>


int quality_points(float grade) {
  if (grade >= 90) { return 4; }
  if (grade >= 80) { return 3; }
  if (grade >= 70) { return 2; }
  if (grade >= 60) { return 1; }
  return 0;
}


int qp(float grade) {
  int points = (int) grade / 10 - 5;
  if (points > 4) { return 4; }
  return points > 0 ? points : 0;
}


int main() {
  for (int i = 0; i <= 100; i += 5) {
    printf("%03d: %d (%d)\n", i, quality_points(i), qp(i));
  }
}
