#include <stdio.h>


int main() {
  FILE *fp;

  if ((fp = fopen("clients.txt", "r")) == NULL) {
    puts("File could not be opened.");
  } else {
    printf(
      "Enter request\n"
      " 1) List accounts with 0 balance\n"
      " 2) List accounts with positive balances\n"
      " 3) List accounts with negative balances\n"
      " 4) End\n");
    unsigned int request;

    scanf("%u", &request);
    while (request != 4) {
      unsigned int acct;
      double balance;
      char name[30];

      fscanf(fp, "%d%29s%lf", &acct, name, &balance);
      switch (request) {
      case 1:
        puts("\n0-balance accounts");
        while (!feof(fp)) {
          if (balance == 0) {
            printf("%-10d%-13s%7.2f\n", acct, name, balance);
          }
          fscanf(fp, "%d%29s%lf", &acct, name, &balance);
        }
        break;
      case 2:
        puts("\nPostive balances");
        while (!feof(fp)) {
          if (balance > 0) {
            printf("%-10d%-13s%7.2f\n", acct, name, balance);
          }
          fscanf(fp, "%d%29s%lf", &acct, name, &balance);
        }
        break;
      case 3:
        puts("\nNegative balances");
        while (!feof(fp)) {
          if (balance < 0) {
            printf("%-10d%-13s%7.2f\n", acct, name, balance);
          }
          fscanf(fp, "%d%29s%lf", &acct, name, &balance);
        }
        break;
      }
      rewind(fp);
      printf("\n> ");
      scanf("%u", &request);
    }
    puts("Terminating.");
    fclose(fp);
  }
  return 0;
}
