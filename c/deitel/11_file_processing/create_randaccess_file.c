#include <stdio.h>

#define N_RECORDS 100


struct client_data {
  unsigned int acct_number;
  char last_name[15];
  char first_name[10];
  double balance;
};


int main() {
  FILE *fp;

  if ((fp = fopen("accounts.dat", "wb")) == NULL) {
    puts("Could not open file");
  } else {
    struct client_data blank_client = {0, "", "", 0.};
    for (unsigned int i = 1; i <= N_RECORDS; ++i) {
      fwrite(&blank_client, sizeof(struct client_data), 1, fp);
    }
    fclose(fp);
  }
  
  return 0;
}
