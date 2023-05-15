#include <iostream>
using namespace std;


void print_next_digit(int n) {
  if (n < 10) {
    cout << "  " << n;
  } else {
    int last = n % 10;
    print_next_digit(n / 10);
    cout << "  " << last;
  }
}


int main() {
  print_next_digit(90210);
  printf("\n");
  return 0;
}
