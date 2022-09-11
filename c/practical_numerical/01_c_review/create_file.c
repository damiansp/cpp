xsxc#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


struct Patient {
  int id;
  char name[15];
  int blood_pressure;
};


int main() {
  int i, n_read;
  FILE *fp;
  struct Patient s1;
  struct Patient s2;
  struct Patient s10 = {10, "Bond", 50};
  struct Patient s11 = {11, "Chalmers", 51};
  struct Patient s12 = {12, "Davidson", 52};
  struct Patient s13 = {13, "Erikson", 53};
  struct Patient s14 = {14, "Farmer", 54};
  struct Patient s15 = {15, "Geary", 55};

  fp = fopen("patients.bin", "w");
  fwrite(&s10, sizeof(s1), 1, fp);
  fwrite(&s11, sizeof(s1), 1, fp);
  fwrite(&s12, sizeof(s1), 1, fp);
  fwrite(&s13, sizeof(s1), 1, fp);
  fwrite(&s14, sizeof(s1), 1, fp);
  fwrite(&s15, sizeof(s1), 1, fp);
  fclose(fp);

  fopen("patients.bin", "r");
  for (i = 0; i < 5; i++) {
    n_read = fread(&s2, sizeof(s2), 1, fp);
    if (n_read == 1) {
      printf("\nPatient ID: %d", s2.id);
      printf("\nName: %s", s2.name);
      printf("\nBlood pressure: %d", s2.blood_pressure);
    } else {
      if (feof(fp)) {
        printf("Error reading patients.bin: unexpected EOF fp is %p\n", fp);
      } else if (ferror(fp)) {
        perror("rror reading patients.bin");
      }
    }
  }
  fclose(fp);
}
