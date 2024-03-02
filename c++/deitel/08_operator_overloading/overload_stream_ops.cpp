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
  output << "(" << number.area_code << ") " << number.exchange << "-"
         << number.line;
  return output;
}


istream& operator>>(istream& input, PhoneNumber& number) {
  input.ignore();  // skip char: '('
  input >> setw(4) >> number.area_code;
  input.ignore(2);  // skip ") "
  input >> setw(4) >> number.exchange;
  input.ignore();   // skip '-'
  input >> setw(5) >> number.line;
  return input;
}


int main() {
  PhoneNumber phone;
  cout << "Enter phone number as '(123) 456-7890':\n";
  cin >> phone;
  cout << "Received: " << phone << endl;
  return 0;
}
