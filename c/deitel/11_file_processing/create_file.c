#include <stdio.h>


int main() {
  FILE* fp;

  if ((fp = fopen("clients.txt", "w")) == NULL) {
    puts("The file could not be opened.");
  } else {
    puts("Enter account, name, and balance (space-delineated)");
    puts("(EOF [CRTL-d] to end input)");
    printf("> ");

    unsigned int acct;
    char name[30];
    double balance;

    scanf("%d%29s%lf", &acct, name, &balance);
    while (!feof(stdin)) {
      fprintf(fp, "%d %s %.2f\n", acct, name, balance);
      printf("> ");
      scanf("%d%29s%lf", &acct, name, &balance);
    }
    fclose(fp);
  }
  return 0;
}
