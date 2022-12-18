#include <stdio.h>

#define N_STUDENTS 3
#define N_EXAMS 4


int min(const int grades[][N_EXAMS], int n_students, int n_tests);
int max(const int grades[][N_EXAMS], int n_students, int n_tests);
double mean(const int set_of_grades[], int n_tests);
void print_array(const int grades[][N_EXAMS], int n_students, int n_tests);


int main(void) {
  int student;
  const int grades[N_STUDENTS][N_EXAMS] = {
    {77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};

  printf("Grades matrix:\n");
  print_array(grades, N_STUDENTS, N_EXAMS);
  printf(
    "\nGrade range: (%d, %d)\n",
    min(grades, N_STUDENTS, N_EXAMS),
    max(grades, N_STUDENTS, N_EXAMS));
  // each student's avg
  for (student = 0; student < N_STUDENTS; student++) {
    printf(
      "Mean grad for student %d: %.2f\n",
      student,
      mean(grades[student], N_EXAMS));
  }

  return 0;
}


int min(const int grades[][N_EXAMS], int n_students, int n_tests) {
  int i, j;
  int lowest = 100;

  for (i = 0; i < n_students; i++) {
    for (j = 0; j < n_tests; j++) {
      if (grades[i][j] < lowest) { lowest = grades[i][j]; } 
    }
  }

  return lowest;
}


int max(const int grades[][N_EXAMS], int n_students, int n_tests) {
  int i, j;
  int highest = 0;

  for (i = 0; i < n_students; i++) {
    for (j = 0; j < n_tests; j++) {
      if (grades[i][j] > highest) { highest = grades[i][j]; } 
    }
  }

  return highest;
}


double mean(const int set_of_grades[], int n_tests) {
  int i;
  int total = 0;

  for (i = 0; i < n_tests; i++) { total += set_of_grades[i]; }

  return (double) total / n_tests;
}


void print_array(const int grades[][N_EXAMS], int n_students, int n_tests) {
  int i, j;

  printf("           [0]  [1]  [2]  [3]");
  for (i = 0; i < n_students; i++) {
    printf("\nStudent[%d]: ", i);
    for (j = 0; j < n_tests; j++) {
      printf("%-5d", grades[i][j]);
    }
  }
}
