#ifndef STRING_H
#define STRING_H


#include <iostream>
using namespace std;


class String {
  friend ostream& operator<<(ostream&, const String&);
  friend istream& operator>>(istream&, const String&);

 public:
  String(const char*="");
  String(const String&);
  ~String();
  const String& operator=(const String&);
  const String& operator+=(const String&);
  bool operator!() const;
  bool operator==(const String&) const;
  bool operator<(const String&) const;

  bool operator!=(const String& other) const { return !(*this == other); }

  bool operator>(const String& other) const { return other < *this; }

  bool operator<=(const String& other) const { return !(other < *this); }

  bool operator>=(const String& other) const { return !(*this < other); }

  char& operator[](int);
  const char& operator[](int) const;
  String operator()(int, int);  // return substring
  int len() const;

 private:
  int length;
  char* sp;  // pointer to start of string
  void set_string(const char*);
};


#endif
