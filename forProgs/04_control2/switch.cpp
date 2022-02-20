#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  int total{0};
  int i{0};
  int as{0};
  int bs{0};
  int cs{0};
  int ds{0};
  int fs{0};

  cout << "Enter grades (0-100); CTRL-d to complete:\n";
  int grade;

  while (cin >> grade) {
    total += grade;
    ++i;
    switch (grade / 10) {
      case 10:
      case 9: ++as; break;
      case 8: ++bs; break;
      case 7: ++cs; break;
      case 6: ++ds; break;
      default: ++fs; break;
    }
  }

  cout << fixed << setprecision(2);
  if (i != 0) {
    double mean = static_cast<double>(total) / i;
    cout << "Total of " << i << " grades: " << total
         << "\nClass mean: " << mean
         << "\nAs: " << as
         << "\nBs: " << bs
         << "\nCs: " << cs
         << "\nDs: " << ds
         << "\nFs: " << fs << endl;
  } else {
    cout << "No grades entered." << endl;
  }
}
