#include <stdio.h>


void f1(int a);
void f2(int b);
void f3(int c);


int main(void) {
  void (*f[3])(int) = {f1, f2, f3};
  int choice;

  printf("Choose between 0 and 2 (3 to end): ");
  scanf("%d", &choice);
  while (choice >= 0 && choice < 3) {
    (*f[choice])(choice);
    printf("Choose between 0 and 2 (3 to end): ");
    scanf("%d", &choice);
  }
  printf("Bye\n");
  return 0;
}


void f1(int a) { printf("Entered %d: called f1\n", a); }


void f2(int b) { printf("Entered %d: called f2\n", b); }


void f3(int c) { printf("Entered %d: called f3\n", c); }
