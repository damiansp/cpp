#include <stdio.h>

#define SIZE 99


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
    1, 8, 1, 7, 6, 3, 9, 4, 4, 6, 2, 8, 6, 7, 2, 2, 8, 1, 4, 4, 5, 8, 9, 4};

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
  bubble_sort(answer);
  printf("Median: %d\n", answer[SIZE / 2]);
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
  int mode_value = 0;
  for (rating = 1; rating <= 9; rating++) { freq[rating] = 0; }
  for (j = 0; j < SIZE; j++) { ++freq[answer[j]]; }
  for (rating = 1; rating <= 9; rating++) {
    printf("%8d%11d           ", rating, freq[rating]);
    if (freq[rating] > largest) {
      largest = freq[rating];
      mode_value = rating;
    }
    for (h = 1; h <= freq[rating]; h++) { printf("*"); }
    printf("\n");
  }
  printf("Mode: %d (%d times)\n", mode_value, largest);
}
