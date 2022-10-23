#include <math.h>
#include <stdbool.h>
#include <stdio.h>


bool is_prime1(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if ((float) (n % i) == 0) { return false; }
  }
  return true;
}


bool is_prime2(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if ((float) (n % i) == 0) { return false; }
  }
  return true;
}


int main() {
  const int MAX = 100000;
  int resume;
  
  printf("Starting prime1 loop:\n");
  for (int i = 1; i <= MAX; i++) {
    if (is_prime1(i)) { printf("%d\t", i); }
  }
  printf("\nEnter any int to resume: ");
  scanf("%d", &resume);
  printf("\n\nStarting prime2 loop:\n");
  for (int i = 1; i <= MAX; i++) {
    if (is_prime2(i)) { printf("%d\t", i); }
  }
  printf("\n");
}
