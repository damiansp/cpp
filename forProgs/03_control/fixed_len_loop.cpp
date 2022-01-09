#include <iostream>
using namespace std;


int main() {
  int total{0};
  int counter{1};
  int grade;
  
  while (counter <= 10) {
    cout << "Enter grade: ";
    cin >> grade;
    total += grade;
    counter++;
  }
  int mean{total / 10};

  cout << "\nTotal of all 10 grades: " << total;
  cout << "\nMean grade: " << mean << endl;
  return 0;
}
