#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
  char c;
  int x;
  double d;
} MyStruct;


int main(void) {
  char source[] = "Hello, World!";
  char dest[5];
  memcpy(dest, source, sizeof dest);
  printf("Source: %s\n", source);
  printf("Dest after copying 5 chars:\n ");
  for (size_t i = 0; i < sizeof dest; ++i) { putchar(dest[i]); }
  printf("\n");

  int arr[] = {10, 20, 30, 40, 50};
  int *p = malloc(5 * sizeof(int));
  memcpy(p, arr, 5 * sizeof(int));
  for (int i = 0; i < 5; ++i) { printf("%d ", p[i]); }
  printf("\n");

  MyStruct source_str,
    dest_str;
  source_str.c = 'a';
  source_str.x = 123;
  source_str.d = 456.789;
  memcpy(&dest_str, &source_str, sizeof(dest_str));
  printf("The result after copying bytes from source to dest:\n");
  printf("Dest: c = %c\n", dest_str.c);
  printf("      x = %d\n", dest_str.x);
  printf("      d = %f\n", dest_str.d);
}
