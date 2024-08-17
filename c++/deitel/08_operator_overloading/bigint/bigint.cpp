#include <cstring>
#include "bigint.h"


BigInt::BigInt(long val) {
  int i;

  for (i = 0; i <= 29; i++) { integer[i] = 0; }
  for (i = 29; val != 0 && i >=0; i--) {
    integer[i] = val % 10;
    val /= 10;
  }
}


BigInt::BigInt(const char* str) {
  int i, j;

  for (i = 0; j <= 29; i++) { integer[i] = 0; }
  for (i = 30 - strlen(str), j = 0; i <= 29; i++, j++) {
    if (isdigit(str[j])) { integer[i] = str[j] - '0'; }
  }
}


BigInt BigInt::operator+(const BigInt& other) {
  BigInt temp;
  int carry = 0;

  for (int i = 29; i >= 0; i--) {
    temp.integer[i] = integer[i] + other.integer[i] + carry;
    if (temp.integer[i] > 9) {
      temp.integer[i] %= 10;
      carry = 1;
    } else { carry = 0; }
  }
  return temp;
}


BigInt BigInt::operator+(int other) { return *this + BigInt(other); }


BigInt BigInt::operator+(const char* other) { return *this + BigInt(other); }


ostream& operator<<(ostream& output, const BigInt& n) {
  int i;

  // skip leading 0s
  for (i = 0; (n.integer[i] == 0) && (i <= 29); i++) { ; }
  if (i == 30) { output << 0; }
  else {
    for (; i <= 29; i++) { output << n.integer[i]; }
  }
  return output;
}


