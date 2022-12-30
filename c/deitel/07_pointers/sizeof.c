#include <stdio.h>


size_t get_size(float *ptr);


int main(void) {
  float array[20];

  printf(
    "The number of bytes in the 20-element float array is %lu\nThe number of "
    "bytes returned by get_size() is %lu\n",
    sizeof(array),
    get_size(array));
  return 0;
}


size_t get_size(float *ptr) { return sizeof(ptr); }
