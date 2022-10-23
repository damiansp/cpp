#include <stdio.h>


void is_perfect(int n) {
  int sum = 0;
  int n_factors = 0;
  int factors[20];
  int next_idx = 0;
  int i;
  
  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      factors[next_idx++] = i;
      n_factors++;
      sum += i;
    }
  }
  if (sum == n) {
    printf("%d is perfect:\n", n);
    for (i = 0; i < n_factors; i++) {
      printf("%d ", factors[i]);
      if (i < n_factors - 1) {
        printf("+ ");
      } else { printf("= "); }
    }
    printf("%d\n\n", sum);
  }
}


int main() {
  for (int i = 1; i <= 100; i++) {
    is_perfect(i);
  }
  return 0;
}
