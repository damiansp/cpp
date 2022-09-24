#include <stdio.h>


int max(int x, int y, int z);


int main(void) {
  int n1, n2, n3;

  printf("Enter three ints, separated by spaces: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  printf("Max is: %d\n", max(n1, n2, n3));
  return 0;
}


int max(int x, int y, int z) {
  int mx = x;
  if (y > mx) { mx = y; }
  if (z > mx) { mx = z; }
  return mx;
}
