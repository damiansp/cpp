#include <iomanip>
#include <iostream>
using namespace std;


class PhoneNumber {
  friend ostream& operator<<(ostream&, const PhoneNumber&);
  friend istream& operator>>(istream&, PhoneNumber&);

private:
  char area_code[4]; // 3 + null term
  char exchange[4];
  char line[5];
};


// Overloaded stream-insertion operator (cannot be a member func if we want to
// invoke as
// cout << my_phone_number
ostream& operator<<(ostream& output, const PhoneNumber& number) {
  output << "(" << number.area_code << ")" << number.exchange << "-"
         << number.line;
  return output;
}


istream& operator>>(istream& input, PhoneNumber& num) { /* TODO */; }
