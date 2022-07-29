#include <stdio.h>

#define CONDITIONAL


int main(void) {
#ifdef CONDITIONAL
  printf("This statement indicates CONDITIONAL is defined\n");
#endif

#ifdef NONESUCH
  printf("This statement indicates NONESUH is defined\n");
#endif
}
