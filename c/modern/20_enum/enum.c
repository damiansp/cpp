#include <stdio.h>


int main(void) {
  enum MyEnum {FIRST, SECOND, THIRD};
  enum MyEnum my_enum_var = SECOND;
  printf("Declared an enum with value set to: %d\n", my_enum_var);
}
