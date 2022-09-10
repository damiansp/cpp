#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main() {
  struct record {
    double matrix[3][5];
  };

  int i, j;
  FILE *ptr;
  struct record data_record;
  size_t records_written;
  double my_mat[3][5] = {
    {2.6, 3.1, 7.4, 0.6, 9.3},
    {4.9, 9.3, 0.6, 7.4, 3.1},
    {8.3, 8.8, 5.2, 2.7, 0.8}};

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 5; ++j) {
      data_record.matrix[i][j] = my_mat[i][j];
    }
  }
  ptr = fopen("matrix.bin", "w");
  if (!ptr) {
    printf("Failed to create file.");
    return 1;
  }
  // fwrite(what, size, how_many, pointer to file obj
  records_written = fwrite(
    data_record.matrix, sizeof(data_record.matrix), 1, ptr);
  printf("Wrote %zu element(s) to matrix.bin\n", records_written);
  printf("Size of data_record.matrix was %lu\n", sizeof(data_record.matrix));
  fclose(ptr);
  return 0;
}



  
