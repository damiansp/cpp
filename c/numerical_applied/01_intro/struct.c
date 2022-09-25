#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


struct Student {
  int id;
  char name[16];
  double percent;
};


void print_student(struct Student *student) {
  printf("Student ID: %d\n", student->id);
  printf("  %s (%.6f%%)\n", student->name, student->percent);
}


int main() {
  struct Student s1, s2;
  struct Student clique[5];
  char clique_members[5][20] = {
    "Annie Adams", "Bobby Bond", "Connie Conner", "Dwight Davidson",
    "Ellen Elks"};
  int i;

  s1.id = 1;
  strcpy(s1.name, "Rob Smith");
  s1.percent = 67.400000;
  print_student(&s1);

  s2.id = 2;
  strcpy(s2.name, "Mary Gallagher");
  s2.percent = 93.800000;
  print_student(&s2);

  for (i = 0; i < 5; ++i) {
    clique[i].id = i + 3;
    strcpy(clique[i].name, clique_members[i]);
    clique[i].percent = 12.34568 * i + 50;
  }
  for (i = 0; i < 5; ++i) {
    print_student(&clique[i]);
  }
  return 0;
}
