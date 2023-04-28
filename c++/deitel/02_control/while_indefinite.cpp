#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  int total = 0,
    counter = 0,
    grade;
  double mean;

  cout << "Enter next grade (-1 to end): ";
  cin >> grade;
  while (grade != -1) {
    total += grade;
    counter++;
    cout << "Enter next grade (-1 to end): ";
    cin >> grade;
  }
  if (counter) {
    mean = static_cast<double>(total) / counter;
    cout << "Class mean: "
         << setprecision(2)
         << setiosflags(ios::fixed | ios::showpoint)
         << mean
         << endl;
  } else {
    cout << "No grades entered" << endl;
  }
  return 0;
}
