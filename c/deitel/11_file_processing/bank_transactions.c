#include <stdio.h>


struct client_data {
  unsigned int acct;
  char surname[15];
  char name[10];
  double balance;
};


unsigned int enter_choice(void);
void create_text_file(FILE* ifp);
void update_record(FILE* fp);
void add_record(FILE* fp);
void delete_record(FILE* fp);


int main() {
  FILE* fp;

  if ((fp = fopen("accounts.dat", "rb+")) == NULL) {
    puts("Could not open file.");
  } else {
    unsigned int choice;
    while ((choice = enter_choice()) != 5) {
      switch (choice) {
        case 1:
          create_text_file(fp); break;
        case 2:
          update_record(fp); break;
        case 3:
          add_record(fp); break;
        case 4:
          delete_record(fp); break;
        default:
          puts("Invalid choice"); break;
      }
    }
    fclose(fp);
  }
}


unsigned int enter_choice(void) {
  printf(
    "\nEnter option:\n"
    "  1) Create a text file of accounts\n"
    "  2) Update an account\n"
    "  3) Add a new account\n"
    "  4) Delete an account\n"
    "  5) End program\n"
    "> ");
  unsigned int choice;
  scanf("%u", &choice);
  return choice;
}


void create_text_file(FILE* ifp) {
  FILE* ofp;

  if ((ofp = fopen("accounts.txt", "w")) == NULL) {
    puts("Could not open file");
  } else {
    rewind(ifp); // set to file beginning
    fprintf(ofp, "%-6s%-16s%-11s%10s\n", "Acct", "Surname", "Name", "Balance");
    while (!feof(ifp)) {
      struct client_data client = {0, "", "", 0.};
      int res = fread(&client, sizeof(struct client_data), 1, ifp);
      if (res && client.acct) {
        fprintf(
          ofp,
          "%-6d%-16s%-11s%10.2f\n",
          client.acct,
          client.surname,
          client.name,
          client.balance);
      }
    }
    fclose(ofp);
  }
}


void update_record(FILE* fp) {
  printf("Enter account to update (1 - 100): > ");
  unsigned int acct;
  scanf("%d", &acct);
  // move fp to start of record
  fseek(fp, (acct - 1) * sizeof(struct client_data), SEEK_SET);
  struct client_data client = {0, "", "", 0.};
  fread(&client, sizeof(struct client_data), 1, fp);
  if (!client.acct) {
    printf("No such account\n");
  } else {
    printf(
      "%-6d%-16s%-11s%10.2f\n\n",
      client.acct, client.surname, client.name, client.balance);
    printf("Enter transaction amount:");
    double transaction;
    scanf("%lf", &transaction);
    client.balance += transaction;
    printf(
      "%-6d%-16s%-11s%10.2f\n\n",
      client.acct, client.surname, client.name, client.balance);
    fseek(fp, (acct - 1) * sizeof(struct client_data), SEEK_SET);
    fwrite(&client, sizeof(struct client_data), 1, fp);
  }
}


void add_record(FILE* fp) {
  printf("Enter new acct no. (1 - 100): > ");
  unsigned int acct;
  scanf("%d", &acct);
  fseek(fp, (acct - 1) * sizeof(struct client_data), SEEK_SET);
  struct client_data client = {0, "", "", 0.};
  fread(&client, sizeof(struct client_data), 1, fp);
  if (client.acct) {
    printf("Account %d already exists.\n", client.acct);
  } else {
    printf("Enter: 'Surname Name Balance': > ");
    scanf("%14s%9s%lf", &client.surname, &client.name, &client.balance);
    client.acct = acct;
    fseek(fp, (client.acct - 1) * sizeof(struct client_data), SEEK_SET);
    fwrite(&client, sizeof(struct client_data), 1, fp);
  }
}


void delete_record(FILE* fp) {
  printf("Enter account to delete (1 - 100): > ");
  unsigned int acct;
  scanf("%d", &acct);
  fseek(fp, (acct - 1) * sizeof(struct client_data), SEEK_SET);
  struct client_data client;
  fread(&client, sizeof(struct client_data), 1, fp);
  if (!client.acct) {
    printf("Acct. %d does not exist\n", acct);
  } else {
    fseek(fp, (acct - 1) * sizeof(struct client_data), SEEK_SET);
    struct client_data bank_client = {0, "", "", 0.};
    fwrite(&bank_client, sizeof(struct client_data), 1, fp);
  }
}


