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


Array::len() const { return size; }


const Array& Array::operator=(const Array& other) {
  if (&other != this) {  // don't allow self-assignment

  }
}
