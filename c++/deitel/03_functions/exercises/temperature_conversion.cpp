#include <iomanip>
#include <iostream>
using namespace std;


double f_to_c(double f) {
  return (5./9) * (f - 32.);
}


double c_to_f(double c) {
  return (9./5)*c + 32.;
}


int main() {
  cout << setw(4) << "C" << setw(8) << "F" << endl;
  for (int c = -40; c <= 100; c += 10) {
    cout << setiosflags(ios::fixed | ios::showpoint)
         << setw(4) << setprecision(2) << c << setw(8) << c_to_f(c) << endl; 
  }
  cout << "\n\n";
  cout << setw(4) << "F" << setw(8) << "C" << endl;
    for (int f = -40; f <= 100; f += 10) {
    cout << setiosflags(ios::fixed | ios::showpoint)
         << setw(4) << setprecision(2) << f << setw(8) << f_to_c(f) << endl; 
  }
  return 0;
}
