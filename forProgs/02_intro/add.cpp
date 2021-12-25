#include <iostream>


int main() {
  int n1{0},
    n2{0},
    sum{0};
  std::cout << "Number: ";
  std::cin >> n1;
  std::cout << "'Nother number: ";
  std::cin >> n2;
  sum = n1 + n2;
  std::cout << "Sum is " << sum << std::endl;

  return 0;
}
