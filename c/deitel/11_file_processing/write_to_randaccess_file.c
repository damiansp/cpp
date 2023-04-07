#include <stdio.h>


struct client_data {
  unsigned int acct_number;
  char last_name[15];
  char first_name[10];
  double balance;
};


int main() {
  FILE* fp;

  if ((fp = fopen("accounts.dat", "rb+")) == NULL) {
    puts("File could not be opened");
  } else {
    struct client_data client = {0, "", "", 0.};
    printf("Enter acct no. (0 to quit): > ");
    scanf("%d", &client.acct_number);
    while (client.acct_number != 0) {
      printf("\nEnter: last_name first_name balance: > ");
      fscanf(
        stdin,
        "%14s%9s%lf",
        client.last_name,
        client.first_name,
        &client.balance);
      fseek(
        fp, (client.acct_number - 1) * sizeof(struct client_data), SEEK_SET);
      fwrite(&client, sizeof(struct client_data), 1, fp);
      printf("Enter acct no. (0 to quit): > ");
      scanf("%d", &client.acct_number);
    }
    fclose(fp);
  }
  
  return 0;
}
