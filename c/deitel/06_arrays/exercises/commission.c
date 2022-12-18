#include <stdio.h>

#define BASE_SALARY 200
#define COMMISSION 0.09
#define SALESFORCE 20
#define N_BINS 10


int calculate_salary(int sales) {
  return (int) (BASE_SALARY + COMMISSION*sales);
}


int get_bin(int salary) {
  if (salary < 200) { return 0; }
  if (salary >= 1000) { return 9; }
  return salary / 100 - 1;
}


int main() {
  int sales[SALESFORCE];
  int i;
  int bins[N_BINS] = {0};
  char bin_labels[N_BINS][8] = {
    "<200\0", "200-299\0", "300-399\0", "400-499\0", "500-599\0", "600-699\0",
    "700-799\0", "800-899\0", "900-999\0", "1000+\0"};
  int salary;

  // populate sales:
  for (i = 0; i < SALESFORCE; i++) { sales[i] = 100 + 500*i; }
  for (i = 0; i < SALESFORCE; i++) {
    salary = calculate_salary(sales[i]);
    printf(
      "Salesperson %d made $%d in sales: $%d salary\n", i, sales[i], salary);
    ++bins[get_bin(salary)];
  }
  printf("\nSalaries in each bracket:\n");
  for (i = 0; i < N_BINS; i++) {
    printf("%7s: %d\n", bin_labels[i], bins[i]);
  }
  
  return 0;
}
