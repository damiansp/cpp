#include <iostream>


int main() {
  int i1 = 1;
  int i2;
  i2 = 3;
  int i3(3);
  //int i4{4}; // C++ 20+
  double d1 = 2.2;
  double d2 = i1;
  int i5 = d1; // 2
  int i6 = static_cast<int>(d1);
  char c1 = 'a';
  bool flag = false;
  flag = i1;   // true

  auto a1 = 1;
  auto a2 = 2.2;
  a1 = static_cast<int>(a2)
    
  auto a3 = 'c';
  auto a4 = "s";
  auto a5 = true;
  auto a6 = 3L;
  //auto a7 = 1'000'000'000'000; // C++ 14+
  auto a7 = 1000000000000;
  auto a8 = 0xFF;  // 255
  auto a9 = 0b111; // 7

  return 0;
}
