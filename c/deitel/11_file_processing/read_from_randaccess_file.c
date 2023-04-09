#include <stdio.h>


struct client_data {
  unsigned int acct_number;
  char last_name[15];
  char first_name[10];
  double balance;
};


int main() {
  FILE* fp;

  if ((fp = fopen("accounts.dat", "rb")) == NULL) {
    puts("Could not open file");
  } else {
    printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
    while (!feof(fp)) {
      struct client_data client = {0, "", "", 0.};
      int res = fread(&client, sizeof(struct client_data), 1, fp);
      if (res != 0 && client.acct_number != 0) {
        printf(
          "%-6d%-16s%-11s%10.2f\n",
          client.acct_number, client.last_name, client.first_name, client.balance);
      }
    }
  }
  return 0;
}
