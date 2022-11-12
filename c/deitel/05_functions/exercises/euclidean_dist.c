#include <math.h>
#include <stdio.h>


struct point {
  double x;
  double y;
};


double get_dist(struct point p1, struct point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


int main() {
  struct point origin = {0., 0.};
  struct point three_4 = {3., 4.};
  struct point two_2 = {2., 2.};
  printf(
    "dist((%.1f, %.1f), (%.1f, %.1f)) = %.3f\n",
    origin.x, origin.y, three_4.x, three_4.y, get_dist(origin, three_4));
  printf(
    "dist((%.1f, %.1f), (%.1f, %.1f)) = %.3f\n",
    origin.x, origin.y, two_2.x, two_2.y, get_dist(origin, two_2));
  printf(
    "dist((%.1f, %.1f), (%.1f, %.1f)) = %.3f\n",
    two_2.x, two_2.y, three_4.x, three_4.y, get_dist(two_2, three_4));
  return 0;
}

