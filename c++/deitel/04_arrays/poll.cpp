#include <iomanip>
#include <iostream>
using namespace std;


int main() {
  const int N = 40;
  const int N_VALUES = 11;
  int responses[N] = {
    1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6,
    7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
  int freqs[N_VALUES] = {0};

  for (int response = 0; response < N; response++) {
    ++freqs[responses[response]];
  }
  cout << "Rating" << setw(17) << "Frequency" << endl;
  for (int rating = 1; rating < N_VALUES; rating++) {
    cout << setw(6) << rating << setw(17) << freqs[rating] << endl;
  }
  return 0;
}
