#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


struct record {
  double matrix[3][5];
};


int main() {
  FILE *ptr;
  struct record data_record;
  size_t n_records;

  ptr = fopen("matrix.bin", "r'");
  if (!ptr) {
    printf("Failed to open matrix.bin\n");
    return 1;
  }
  n_records = fread(data_record.matrix, sizeof(data_record.matrix), 1, ptr);
  printf("Read %zu records\n", n_records);
  printf("Size of struct record is %lu\n", sizeof(struct record));
  printf("matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf(" %.1lf", data_record.matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  fclose(ptr);
  return 0;
}
