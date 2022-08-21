#include <stdio.h>


[[deprecated]]
void old_f() { printf("An old, deprecated function.\n"); }


int main(void) { old_f(); }
