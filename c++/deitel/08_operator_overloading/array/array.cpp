#include <cassert>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

#include "array.h"


int Array::array_count = 0;


Array::Array(int array_size) {
  size = (array_size > 0 ? array_size : 10);
  ptr = new int[size];
  assert(ptr != 0);  // terminate if memory not allocated
  ++array_count;
  for (int i = 0; i < size; i++) { ptr[i] = 0; }  // init array
}


Array::Array(const Array& init): size(init.size) {
  ptr = new int[size];
  assert(ptr != 0);
  ++array_count;
  for (int i = 0; i < size; i++) { ptr[i] = init.ptr[i]; }
}


Array::~Array() {
  delete[] ptr;
  --array_count;
}


int Array::len() const { return size; }


const Array& Array::operator=(const Array& other) {
  if (&other != this) {  // don't allow self-assignment
    if (size != other.size) {
      delete[] ptr;
      size = other.size;
      ptr = new int[size];
      assert(ptr != 0);
    }
    for (int i = 0; i < size; i++) {
      ptr[i] = other.ptr[i];
    }
  }
  return *this;
}


bool Array::operator==(const Array& other) const {
  if (size != other.size) { return false; }
  for (int i = 0; i < size; i++) {
    if (ptr[i] != other.ptr[i]) { return false; }
  }
  return true;
}


int& Array::operator[](int index) {
  assert(0 <= index && index < size);
  return ptr[index];
}


const int& Array::operator[](int index) const {
  assert(0 <= index && index < size);
  return ptr[index];
}


int Array::get_array_count() { return array_count; }


istream& operator>>(istream& input, Array& a) {
  for (int i = 0; i < a.size; i++) { input >> a.ptr[i]; }
  return input;
}


ostream& operator<<(ostream& output, const Array& a) {
  int i;
  for (i = 0; i < a.size; i++) {
    output << setw(12) << a.ptr[i];
    if ((i + 1) % 4 == 0) { output << endl; }
  }
  if (i % 4 != 0) { output << endl; }
  return output;
}
