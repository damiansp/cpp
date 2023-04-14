#include <iostream>

using namespace::std;


const double M_TO_K = 1.609;


inline double convert(int mi) {
  return mi * M_TO_K;
}


int main() {
  int miles = 1;

  while (miles != 0) {
    cout << "Input distance in miles (0 to quit): > ";
    cin >> miles;
    cout << "  " << convert(miles) << "km" << endl;
  }
  cout << endl;
  return 0;
}
