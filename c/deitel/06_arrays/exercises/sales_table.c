#include <stdio.h>

#define N_SALESMEN 4
#define N_ITEMS 5
#define SLIP_LEN 3


void print_sales(int sales[N_SALESMEN][N_ITEMS]) {
  int row_total;
  int col_totals[N_ITEMS + 1] = {0};
  
  printf("ID    Item_0 Item_1 Item_2 Item_3 Item_4 Total\n");
  for (int s = 0; s < N_SALESMEN; s++) {
    printf("%d     ", s);
    row_total = 0;
    for (int i = 0; i < N_ITEMS; i++) {
      printf("%6d ", sales[s][i]);
      row_total += sales[s][i];
      col_totals[i] += sales[s][i];
    }
    printf("%6d\n", row_total);
    col_totals[N_ITEMS] += row_total;
  }
  printf("---------------------------------------------\n");
  printf("Total ");
  for (int c = 0; c <= N_ITEMS; c++) {
    printf("%6d ", col_totals[c]);
  }
  printf("\n");
}


void add_records_to_sales(
    int records[N_SALESMEN * N_ITEMS][SLIP_LEN],
    int sales[N_SALESMEN][N_ITEMS]) {
  int record[SLIP_LEN];
  int id, item_id, amount;
  
  for (int slip = 0; slip < N_SALESMEN * N_ITEMS; slip++) {
    sales[records[slip][0]][records[slip][1]] += records[slip][2];
  }
}


int main() {
  int records[N_SALESMEN * N_ITEMS][SLIP_LEN] = {
    {0, 0, 300}, {0, 1, 308}, {0, 2, 259}, {0, 3, 306}, {0, 4, 324},
    {1, 0, 564}, {1, 1, 248}, {1, 2, 768}, {1, 3,  49}, {1, 4, 116},
    {2, 0, 379}, {2, 1, 111}, {2, 2, 468}, {2, 3, 249}, {2, 4, 226},
    {3, 0,  48}, {3, 1, 179}, {3, 2, 256}, {3, 2, 210}, {3, 4, 208}};
  int sales[N_SALESMEN][N_ITEMS] = {0.};

  add_records_to_sales(records, sales);
  print_sales(sales);
  return 0;
}
