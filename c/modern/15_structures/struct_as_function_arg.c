#include <stdio.h>


struct MyStruct {
  char c;
  int x;
  double d;
};

typedef struct {
  char c;
  int x;
  double d;
} LeStruct;


struct MyStruct create_struct(char c, int x, double d) {
  struct MyStruct s;
  s.c = c;
  s.x = x;
  s.d = d;
  return s;
}


void print_struct(struct MyStruct struct_name) {
  printf("Struct has member variables:\n");
  printf("  c -> %c\n", struct_name.c);
  printf("  x -> %d\n", struct_name.x);
  printf("  d -> %f\n", struct_name.d);
}


void print_struct2(LeStruct s) {
  printf("Struct has member variables:\n");
  printf("  c -> %c\n", s.c);
  printf("  x -> %d\n", s.x);
  printf("  d -> %f\n", s.d);
}

void print_struct_ref(struct MyStruct *s) {
  printf("(Printing by reference...)\n");
  printf("Struct has member variables:\n");
  printf("  c -> %c\n", s->c);
  printf("  x -> %d\n", s->x);
  printf("  d -> %f\n", s->d);
}


int main(void) {
  struct MyStruct s = create_struct('a', 12, 3.456);
  print_struct(s);
  print_struct_ref(&s);
  LeStruct ls = {'o', 78, 9.012};
  print_struct2(ls);
}
