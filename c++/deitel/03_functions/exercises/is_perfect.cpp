#include <iostream>
using namespace std;


bool is_perfect(int n) {
  int sum_of_factors = 1;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      sum_of_factors += i;
    }
  }
  return sum_of_factors == n;
}


int main() {
  cout << "Perfect numbers between 1 and 100,000:" << endl;
  for (int i = 1; i <= 100000; i++) {
    if (is_perfect(i)) {
      cout << "  " << i << endl;
    }
  }
}
