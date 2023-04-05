#include <stdio.h>


int main() {
  FILE *fp;

  if ((fp = fopen("clients.txt", "r")) == NULL) {
    puts("File could not be opened.");
  } else {
    unsigned int acct;
    char name[30];
    double balance;

    printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
    fscanf(fp, "%d%29s%lf", &acct, name, &balance);
    while (!feof(fp)) {
      printf("%-10d%-13s%7.2f\n", acct, name, balance);
      fscanf(fp, "%d%29s%lf", &acct, name, &balance);
    }
    fclose(fp);
  }
  return 0;
}
