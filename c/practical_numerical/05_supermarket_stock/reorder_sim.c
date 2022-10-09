#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void reorder();
void increase_stock(int id, int amt);
void decrease_stock();


struct item {
  int id;
  char descr[11];
  int limit;
  int n_stock;
  char address[30];
};

const int INVENTORY = 17;
struct item it1;
struct item it2;
struct item store[INVENTORY];
FILE *fp;
int i;


int main() {
  int n_read;
  int item_id, update_amt;
  char transaction;  // i(ncrease)/d(ecrease)

  fp = fopen("supermarket.dat", "r");
  printf("\nID DESCRIPTION LIMIT No IN STOCK ADRESS");
  for (i = 0; i < INVENTORY; i++) {
    n_read = fread(&it2, sizeof(it2), 1, fp);
    if (n_read == 1) {
      printf(
        "\n%2d : %s : %d : % d : %s",
        it2.id, it2.descr, it2.limit, it2.n_stock, it2.address);
    } else {
      if (feof(fp)) { printf("Unexpected EOF; fp is %p\n", fp); }
      else if (ferror(fp)) {
        perror("Unexpected error reading supermaket.data");
      }
    }
  }
  fclose(fp);
  printf("\nType of transaction: (i[ncrease]/d[ecreases]): ");
  scanf("%c", &transaction);
  printf("\nEnter ID: ");
  scanf("%d", &item_id);
  printf("\nGot ID: %d", item_id);
  if (transaction == 'i') {
    printf("\nEnter amt to increase by: ");
    scanf("%d", &update_amt);
    increase_stock(item_id, update_amt);
    return 0;
  } else if (transaction == 'd') {
    printf("\nEnter amt to decrease by: ");
    scanf("%d", &update_amt);
    decrease_stock(item_id, update_amt);
    fclose(fp);
    return 0;
  }
}


void increase_stock(int id, int amt) {
  printf("\nItem ID: %d, being updated by %d\n", id, amt);
  fp = fopen("supermarket.dat", "r+");
  for (i = 0; i < INVENTORY; i++) {
    fread(&it2, sizeof(it2), 1, fp);
    if (it2.id == id) {
      it2.n_stock += amt;
      fseek(fp, -1 * sizeof(it2), SEEK_CUR);
      printf("\n ID:        %d", it2.id);
      printf("\n limit:     %d", it2.limit);
      printf("\n no. stock: %d", it2.n_stock);
      printf("\n address:   %s", it2.address);
      fclose(fp);
      break;
    }
  }
}


void decrease_stock(int id, int amt) {
  fp = fopen("supermarket.dat", "r+");
  for (i = 0; i < INVENTORY; i++) {
    fread(&it2, sizeof(it2), 1, fp);
    if (it2.id == id) {
      store[i].id = it2.id;
      store[i].limit = it2.limit;
      store[i].n_stock = it2.n_stock;
      if (store[i].n_stock == 0) {
        printf("\n Out of stock");
        printf("\n stock: %d", store[i].n_stock);
        printf("\n limit: %d", it2.limit);
        printf("\n n sold: %d", amt);
        break;
      }
      printf("\nStock Update:");
      if (store[i].n_stock - amt <= 0) {
        store[i].n_stock = 0;
        it2.n_stock = store[i].n_stock;
        reorder();
      } else if (store[i].n_stock - amt <= it2.limit) {
        store[i].n_stock -= amt;
        reorder();
      } else {
        store[i].n_stock -= amt;
        it2.n_stock = store[i].n_stock;
        fseek(fp, -1 * sizeof(it2), SEEK_CUR);
        fwrite(&it2, sizeof(it2), 1, fp);
        break;
      }
    }
  }
}


void reorder() {
  printf("\nReorder called in at:\n  %s\n", it2.address);
}
