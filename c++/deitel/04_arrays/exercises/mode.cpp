#include <iostream>
using namespace std;


const int MIN = 0;
const int MAX = 100;
const int RANGE = MAX - MIN;
  

void mode(int x[], int size) {
  int freq[RANGE] = {0};
  int max_count = 0;
  int n_modes = 0;
  int i;

  for (i = 0; i < size; i++) {
    freq[x[i]]++;
  }
  for (i = 0; i < RANGE; i++) {
    if (freq[i] >= max_count) {
      if (freq[i] == max_count) {
        n_modes++;
      } else {
        n_modes = 1;
      }
      max_count = freq[i];
    }
  }
  cout << "Mode" << (n_modes > 1 ? "s" : "") << ": ";
  for (i = 0; i < RANGE; i++) {
    if (freq[i] == max_count) {
      cout << i + MIN << "   ";
    }
  }
  cout << endl;
}


int main() {
  int a1[] = {1, 2, 2, 3, 3, 3};
  int a2[] = {1, 1, 2, 2, 3, 3};
  cout << "a1:\n ";
  mode(a1, 6);
  cout << "a2:\n ";
  mode(a2, 6);
}
