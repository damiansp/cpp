#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
  int total = 0,
    counter = 1,
    grade,
    mean;

  while (counter <= 10) {
    cout << "Enter grade: ";
    cin >> grade;
    total += grade;
    counter++;
  }
  mean = total / 10;  // truncated div
  cout << "Mean is: " << mean << endl;
  return 0;
}
