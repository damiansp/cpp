#include <iomanip>
#include <iostream>
using namespace std;


const int N_RESPONSES = 9;


void mean(const int[], int);
void median(int[], int);
void mode(int[], int[], int);
void bubble_sort(int[], int);


int main() {
  const int N = 99;
  int freq[N_RESPONSES + 1] = {0};
  int responses[N] = {
    6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3,
    9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 6, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8,
    7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

  mean(responses, N);
  median(responses, N);
  mode(freq, responses, N);
  return 0;
}


void mean(const int x[], int size) {
  int total = 0;

  cout << "**************\n     Mean\n**************\n";
  for (int i = 0; i < size; i++) {
    total += x[i];
  }
  cout << setprecision(4) << static_cast<double>(total) / size << "\n\n";
}


void median(int x[], int size) {
  cout << "****************\n     Median\n****************\n";
  bubble_sort(x, size);
  cout << x[size / 2] << "\n\n";
}


void mode(int freq[], int x[], int size) {
  int rating,
    largest = 0,
    mode_val = 0;
  int i;

  cout << "**************\n     Mode\n**************\n";
  for (rating = 1; rating < N_RESPONSES; rating++) {
    freq[rating] = 0;  // why?  already initialized as 0
  }
  for (i = 0; i < size; i++) {
    ++freq[x[i]];
  }
  cout << "Response" << setw(11) << "Frequency" << setw(19) << "Histogram\n\n"
       << setw(55) << "1    1    2    2\n" << setw(56) << "5    0    5    0\n\n";
  for (rating = 1; rating <= N_RESPONSES; rating++) {
    cout << setw(8) << rating << setw(11) << freq[rating] << "          ";
    if (freq[rating] > largest) {
      largest = freq[rating];
      mode_val = rating;
    }
    for (i = 1; i <= freq[rating]; i++) {
      cout << '*';
    }
    cout << endl;
  }
  cout << "Mode: " << mode_val << endl;
}


void bubble_sort(int x[], int size) {
  int temp;

  for (int pass = 1; pass < size; pass++) {
    for (int i = 0; i < size - 1; i++) {
      if (x[i] > x[i + 1]) {
        temp = x[i];
        x[i] = x[i + 1];
        x[i + 1] = temp;
      }
    }
  }
}
