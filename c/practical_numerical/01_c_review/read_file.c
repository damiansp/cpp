#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


struct Patient {
  int patient_id;
  char name[13];
  int blood_pressure;
};


int main() {
  FILE *fp;
  struct Patient patient;
  int n_read, i;

  fp = fopen("patients.bin", "r");
  for (i = 0; i < 17; i++) {
    fread(&patient, sizeof(patient), 1, fp);
    printf("\nID: %d", patient.patient_id);
    printf("\nName: %s", patient.name);
    printf("\nblood_pressure: %d\n", patient.blood_pressure);
  }
  fclose(fp);

  fp = fopen("patients.bin", "r");
  for (i = 0; i < 17; i++) {
    // search for patient ID #23
    fread(&patient, sizeof(patient), 1, fp);
    if (patient.patient_id == 23) {
      printf("\nPatient #23 is %s\n", patient.name);
      break;
    }
  }

  // Go back to start of file
  fseek(fp, sizeof(patient), SEEK_END);
  rewind(fp);
  printf("The following patients have high blood pressure:\n");
  for (i = 0; i < 17; i++) {
    // all patients with high blood pressure
    fread(&patient, sizeof(patient), 1, fp);
    if (patient.blood_pressure > 63) {
      printf("   %s (%d)\n", patient.name, patient.blood_pressure);
    }
  }
  fclose(fp);
}
