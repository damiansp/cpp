#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


struct item {
  int id;
  char descr[11];
  int limit;
  int n_stocked;
  char address[30];
};


int main() {
  int i, n_read;
  FILE *fp;
  struct item it1;
  struct item it2;
  struct item it10 = { 4, "Brie      ", 23, 50, "95 W Park St"};
  struct item it11 = { 7, "Gouda     ", 34, 51, "2 E Park St"};
  struct item it12 = { 9, "Edam      ", 44, 52, "17 New Gate St"};
  struct item it13 = {11, "Camembert ", 25, 53, "12 Toll Ave"};
  struct item it14 = {14, "Cheshire  ", 34, 54, "5 State St"};
  struct item it15 = {16, "Cheddar   ", 51, 55, "63 Madison Ave"};
  struct item it16 = {17, "Pecorino  ", 23, 56, "12 E Park St"};
  struct item it17 = {19, "Manchego  ", 44, 57, "14 MaySt"};
  struct item it18 = {23, "Provolone ", 35, 58, "20 Oregon Wy"};
  struct item it19 = {24, "Parmigiano", 40, 59, "10 W Park St"};
  struct item it20 = {27, "Mascarpone", 40, 60, "31 Queen St"};
  struct item it21 = {31, "Mozzarella", 42, 61, "19 Hope Ave"};
  struct item it22 = {32, "Feta      ", 45, 62, "13 Charles Ave"};
  struct item it23 = {35, "Gruyere   ", 47, 63, "54 Tower St"};
  struct item it24 = {38, "Monterey  ", 41, 63, "11 Cardiff Ave"};
  struct item it28 = {44, "Gorgonzola", 54, 68, "26 Jones St"};
  struct item it29 = {47, "Stilton   ", 58, 69, "57 Lower Ln"};

  fp = fopen("supermarket.dat", "w");
  fwrite(&it10, sizeof(it1), 1, fp);
  fwrite(&it11, sizeof(it1), 1, fp);
  fwrite(&it12, sizeof(it1), 1, fp);
  fwrite(&it13, sizeof(it1), 1, fp);
  fwrite(&it14, sizeof(it1), 1, fp);
  fwrite(&it15, sizeof(it1), 1, fp);
  fwrite(&it16, sizeof(it1), 1, fp);
  fwrite(&it17, sizeof(it1), 1, fp);
  fwrite(&it18, sizeof(it1), 1, fp);
  fwrite(&it19, sizeof(it1), 1, fp);
  fwrite(&it20, sizeof(it1), 1, fp);
  fwrite(&it21, sizeof(it1), 1, fp);
  fwrite(&it22, sizeof(it1), 1, fp);
  fwrite(&it23, sizeof(it1), 1, fp);
  fwrite(&it24, sizeof(it1), 1, fp);
  fwrite(&it28, sizeof(it1), 1, fp);
  fwrite(&it29, sizeof(it1), 1, fp);
  fclose(fp);
  fp = fopen("supermarket.dat", "r");
  printf("ID DESCRIPTION LIMIT No IN STOCK ADRESS\n");
  for (i=0; i < 17; i++) {
    n_read = fread(&it2, sizeof(it2), 1, fp);
    if (n_read == 1) {
      printf(
        "%2d %s  %2d    %2d          %s\n",
        it2.id, it2.descr, it2.limit, it2.n_stocked, it2.address);
    } else {
      if (feof(fp)) {
        printf(
          "Error reading supermarket.data: unexpected EOF. fp is %p\n", fp);
      } else if (ferror(fp)) {
        perror("Unexpected error reading supermarket.day");
      }
    }
  }
  fclose(fp);
}
