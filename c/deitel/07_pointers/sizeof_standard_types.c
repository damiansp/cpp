#include <stdio.h>


int main(void) {
  char c;
  short s;
  int i;
  long lng;
  float f;
  double d;
  long double ld;
  int array[20];
  int *ptr = array;

  printf(
    "sizeof c: %lu\tsizeof(char): %lu\n"
    "sizeof s: %lu\tsizeof(short): %lu\n"
    "sizeof i: %lu\tsizeof(int): %lu\n"
    "sizeof lng: %lu\tsizeof(long): %lu\n"
    "sizeof f: %lu\tsizeof(float): %lu\n"
    "sizeof d: %lu\tsizeof(double): %lu\n"
    "sizeof ld: %lu\tsizeof(long double): %lu\n"
    "sizeof array: %lu\n"
    "sizeof ptr: %lu\n",
    sizeof c, sizeof(char),
    sizeof s, sizeof(short),
    sizeof i, sizeof(int),
    sizeof lng, sizeof(long),
    sizeof f, sizeof(float),
    sizeof d, sizeof(double),
    sizeof ld, sizeof(long double),
    sizeof array,
    sizeof ptr);
  return 0;
}
