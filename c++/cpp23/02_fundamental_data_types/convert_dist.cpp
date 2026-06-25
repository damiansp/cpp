//import std;
#include <iostream>
#include <print>


int main() {
  unsigned int yards {},
    feet {},
    inches {};

  // Convert a distance in (yards, ft, in) -> in
  std::print(
    "Enter a distance in yards, feet, and inches (separated by spaces): ");
  std::cin >> yards >> feet >> inches;

  const unsigned feet_per_yard {3};
  const unsigned inches_per_foot {12};
  unsigned total_inches {};

  total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
  std::println("{} inches", total_inches);


  // Convert in -> (yards, ft, in)
  std::print("Enter a distance in inches: ");
  std::cin >> total_inches;

  feet = total_inches / inches_per_foot;
  inches = total_inches % inches_per_foot;
  yards = feet / feet_per_yard;
  feet = feet % feet_per_yard;
  std::println("{} yd {} ft {} in.", yards, feet, inches);
}
