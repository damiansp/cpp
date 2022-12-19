#include <stdio.h>

#define SIZE 100
#define MAX_MODES 3


void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubble_sort(int a[]);


int main(void) {
  int frequency[10] = {0};
  int response[SIZE] = {
    9, 2, 6, 5, 1, 2, 9, 9, 7, 5, 4, 6, 5, 4, 9, 6, 9, 3, 1, 2, 2, 4, 9, 3, 1,
    2, 6, 6, 5, 6, 7, 7, 7, 3, 1, 3, 6, 5, 1, 7, 2, 2, 2, 7, 5, 8, 1, 5, 8, 7,
    4, 4, 1, 4, 1, 3, 8, 8, 1, 6, 4, 7, 1, 4, 2, 2, 7, 4, 1, 3, 8, 8, 1, 1, 4,
    1, 8, 1, 7, 6, 3, 9, 4, 4, 6, 2, 8, 6, 7, 2, 2, 8, 1, 4, 4, 5, 8, 9, 4, 4};

  mean(response);
  median(response);
  mode(frequency, response);
  return 0;
}


void mean(const int answer[]) {
  int i;
  int total = 0;

  for (i = 0; i < SIZE; i++) { total += answer[i]; }
  printf("Mean: %.4f\n", (double) total / SIZE);
}


void median(int answer[]) {
  int mid;
  double median;

  bubble_sort(answer);
  if (SIZE  % 2) {
    mid = SIZE / 2;
    median = (answer[mid + 1] + answer[mid]) / 2.0;
  }
  else {
    median = (double) answer[SIZE / 2];
  }
  printf("Median: %.1f\n", median);
}


void bubble_sort(int a[]) {
  int pass;
  int i;
  int tmp;
  
  for (pass = 1; pass < SIZE; pass++) {
    for (i = 0; i < SIZE - 1; i++) {
      if (a[i] > a[i + 1]) {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
      }
    }
  }
}


void mode(int freq[], const int answer[]) {
  int rating;
  int j, h;
  int largest = 0;
  int mode_value[MAX_MODES] = {0};
  int modes_found = 0;
  
  for (rating = 1; rating <= 9; rating++) { freq[rating] = 0; }
  for (j = 0; j < SIZE; j++) { ++freq[answer[j]]; }
  for (rating = 1; rating <= 9; rating++) {
    printf("%8d%11d           ", rating, freq[rating]);
    if (freq[rating] > largest) {
      largest = freq[rating];
    }
    for (h = 1; h <= freq[rating]; h++) { printf("*"); }
    printf("\n");
  }
  for (rating = 1; rating <= 9; rating++) {
    if (freq[rating] == largest) {
      mode_value[modes_found++] = rating;
    }
    if (modes_found >= MAX_MODES) { break; }
  }
  for (j = 0; j < MAX_MODES; j++) {
    if (mode_value[j] != 0) {
      printf("Mode: %d (%d times)\n", mode_value[j], largest);
    }
  }
}



















