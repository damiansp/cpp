#include <stdio.h>


typedef union {
  char* name;
  int founded;
  double gdp;
} Country;


int main(void) {
  Country usa;
  usa.name = "United States";
  printf("The %s", usa.name);
  usa.founded = 1776;
  printf(" were founded in %d", usa.founded);
  usa.gdp = 120.33;
  printf(", and has a GDP of %.2f billion\n", usa.gdp);
}
