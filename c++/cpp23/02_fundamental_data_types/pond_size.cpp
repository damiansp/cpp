//import std;
#include <iostream>
#include <numbers>
#include <print>


int main() {
  // Pond requires 2 sq ft of surface area for every 6 inches of fish
  const double fish_factor { 2.0 / 0.5 };  // area per unit len of fish
  const double inches_per_foot { 12.0 };
  double fish_count {};   // n fish
  double fish_length {};  // avg len of fish

  std::print("Enter the number of fish you wish to keep: ");
  std::cin >> fish_count;
  std::print("Enter the average length fish in inches: ");
  std::cin >> fish_length;
  fish_length /= inches_per_foot;  // convert to feet
  std::println("");

  // Get required surface area
  const double pond_area { fish_count * fish_length * fish_factor };
  const double pond_diameter {
    2.0 * std::sqrt(pond_area / std::numbers::pi) };
  const double pond_diameter_feet { std::floor(pond_diameter) };
  const double pond_diameter_inch {
    std::round((pond_diameter - pond_diameter_feet) * inches_per_foot) };
  std::println(
    "Pond diameter required for {} fish is {} feet {} inches.",
    fish_count, pond_diameter_feet, pond_diameter_inch);
}
