#include <iomanip>
#include <iostream>
using namespace std;


const int N_STUDENTS = 3;
const int N_EXAMS = 4;


void print_array(int[][N_EXAMS]);
int min(int[][N_EXAMS]);
int max(int[][N_EXAMS]);
double mean(int[]);


int main() {
  int grades[N_STUDENTS][N_EXAMS] = {
    {77, 68, 86, 73},
    {96, 87, 89, 78},
    {70, 90, 86, 81}};

  cout << "Grades Array:\n";
  print_array(grades);
  cout << "\nRange: " << min(grades) << " - " << max(grades) << endl;
  for (int student = 0; student < N_STUDENTS; student++) {
    cout << "Mean grade for student " << student << ": "
         << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
         << mean(grades[student]) << endl;
  }
  return 0;
}


void print_array(int grades[][N_EXAMS]) {
  cout << "            [0]  [1]  [2]  [3]";
  for (int i = 0; i < N_STUDENTS; i++) {
    cout << "\ngrades[" << i << "] ";
    for(int j = 0; j < N_EXAMS; j++) {
      cout << setiosflags(ios::right) << setw(5) << grades[i][j];
    }
  }
}


int min(int grades[][N_EXAMS]) {
  int low = 100;
  for (int i = 0; i < N_STUDENTS; i++) {
    for (int j = 0; j < N_EXAMS; j++) {
      if (grades[i][j] < low) {
        low = grades[i][j];
      }
    }
  }
  return low;
}

int max(int grades[][N_EXAMS]) {
  int high = 0;
  for (int i = 0; i < N_STUDENTS; i++) {
    for (int j = 0; j < N_EXAMS; j++) {
      if (grades[i][j] > high) {
        high = grades[i][j];
      }
    }
  }
  return high;
}


double mean(int grades[]) {
  int total = 0;
  for (int i = 0; i < N_EXAMS; i++) {
    total += grades[i];
  }
  return static_cast<double>(total) / N_EXAMS;
}
