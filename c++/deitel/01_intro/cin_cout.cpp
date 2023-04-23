#include <iostream>


int main() {
  int x, y, sum;

  std::cout << "Enter an int: > ";
  std::cin >> x;
  std::cout << "Another: > ";
  std::cin >> y;
  sum = x + y;
  std::cout << x << " + " << y << " = " << sum << std::endl;
  return 0;
}
