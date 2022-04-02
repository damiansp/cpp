#include <array>
#include <iostream>
#include <random>
using namespace std;


int main() {
  random_device rd;
  default_random_engine engine{rd()};
  uniform_int_distribution die{1, 6};
  constexpr size_t array_size{7};
  array<int, array_size> freq{};

  for (int roll{1}; roll <= 60'000'000; ++roll) {
    ++freq.at(die(engine));
  }
  cout << "Face  Freq" << endl;
  for (size_t face{1}; face < freq.size(); ++face) {
    cout << "   " << face << "  " << freq.at(face) << endl;
  }
}
