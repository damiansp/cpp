#include <cassert>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

#include "string.h"


String::String(const char* s): length(strlen(s)) {
  cout << "Conversion constructor: " << s << '\n';
  set_string(s);
}


String::String(const String& copy): length(copy.length) {
  cout << "Copy constructor: " << copy.sp << '\n';
  set_string(copy.sp);
}


String::~String() {
  cout << "Destructor: " << sp << '\n';
  delete [] sp;
}


const String& String::operator=(const String& other) {
  cout << "operator= called\n";
  if (&other != this) {
    delete [] sp;
    length = other.length;
    set_string(other.sp);
  } else { cout << "Attempted assigment of a String to itself\n"; }
  return *this;
}


const String& String::operator+=(const String& other) {
  char* temp_p = sp;
  length += other.length;
  sp = new char[length + 1];
  assert(sp != 0);
  strcpy(sp, temp_p);
  strcat(sp, other.sp);
  delete [] temp_p;
  return *this;
}


bool String::operator!() const { return length == 0; }


bool String::operator==(const String& other) const {
  return strcmp(sp, other.sp) == 0;
}


bool String::operator<(const String& other) const {
  return strcmp(sp, other.sp) < 0;
}


char& String::operator[](int subscript) {
  assert(subscript >= 0 && subscript < length);
  return sp[subscript];
}


const char& String::operator[](int subscript) const {
  assert(subscript >= 0 && subscript < length);
  return sp[subscript];
}


String String::operator()(int index, int sub_len) {
  assert(index >= 0 && index < length && sub_len >= 0);
  int len;

  if ((sub_len == 0) || (index + sub_len > length)) { len = length - index; }
  else { len = sub_len; }
  char* temp_ptr = new char[len + 1];
  assert(temp_ptr != 0);  // ensure space allocated
  strncpy(temp_ptr, &sp[index], len);
  temp_ptr[len] = '\0';

  String temp_str(temp_ptr);
  delete [] temp_ptr;
  return temp_str;
}


int String::len() const { return length; }


void String::set_string(const char* str2) {
  sp = new char[length + 1];
  assert(sp != 0);
  strcpy(sp, str2);
}


ostream& operator<<(ostream& output, const String& s) {
  output << s.sp;
  return output;
}


istream& operator>>(istream& input, String& s) {
  char temp[100];
  input >> setw(100) >> temp;
  s = temp;
  return input;
}
