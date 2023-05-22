#include <iostream>
using namespace std;


int quality_points(int avg_score) {
  if (avg_score > 89) return 4;
  if (avg_score > 79) return 3;
  if (avg_score > 69) return 2;
  if (avg_score > 59) return 1;
  return 0;
}


int main() {
  int grades[] = {98, 71, 83, 41, 66};

  for (int i = 0; i < 5; ++i) {
    cout << grades[i] << " -> " << quality_points(grades[i]) << endl;
  }
  return 0;
}
