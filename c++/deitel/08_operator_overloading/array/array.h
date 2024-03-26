#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;


class Array {
  friend ostream& operator<<(ostream&, const Array&);
  friend istream& operator>>(istream&, Array&);

 public:
  Array(int=10);
  Array(const Array&);  // copy constr
  ~Array();
  int len() const;
  const Array& operator=(const Array&);
  bool operator==(const Array&) const;
  bool operator!=(const Array& other) const { return !(*this == other); }
  int& operator[](int);
  const int& operator[](int) const;
  static int get_array_count();

 private:
  int size;
  int *ptr;  // pointer to first element
  static int array_count;
};


#endif
