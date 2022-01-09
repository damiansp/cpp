#include <iostream>
#include <iomanip>
using namespace std;


int main() {
  int total{0};
  int counter{0};
  int grade;

  cout << "Enter grade (-1 to quit): ";
  cin >> grade;
  while (grade != -1) {
    total += grade;
    counter++;
    cout << "Enter grade (-1 to quit): ";
    cin >> grade;
  }
  if (counter) {
    double mean{static_cast<double>(total) / counter};
    cout << "\nTotal of the " << counter << " grades: " << total;
    cout << setprecision(2) << fixed;
    cout << "\nClass mean is: " << mean << endl;
  } else {
    cout << "No grades entered." << endl;
  }
  return 0;
}
