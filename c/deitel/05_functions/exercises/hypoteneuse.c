#include <math.h>
#include <stdio.h>


double get_hypoteneuse(double a, double b);


int main() {
  const int N_TRI = 4;
  double triangles[N_TRI][2] = {{3., 4.}, {5., 12.}, {1., 1.}, {8., 15.}};
  double a, b;

  for (int i = 0; i < N_TRI; i++) {
    a = triangles[i][0];
    b = triangles[i][1];
    printf("a: %f, b: %f, h: %f\n", a, b, get_hypoteneuse(a, b));
  }
      
  return 0;
}


double get_hypoteneuse(double a, double b) { return sqrt(a*a + b*b); }
