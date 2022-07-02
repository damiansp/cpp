#include <stdio.h>


typedef struct MyStruct MyStruct;

struct MyStruct {
  char c;
  int x;
  double d;
};


typedef struct {
  char c;
  int x;
  double d;
} MyOtherStruct;


int main(void) {
  MyStruct ms;
  MyOtherStruct mos;
}
