#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


struct arrivals {
  char pos[3];
  char flight_no[8];
  char sch_arr_time[6];
  char exp_arr_time[6];
  char origin[15];
  char remarks[14];
};


struct flightcount { int count; };


int main() {
  int i, n_read;
  FILE *fp_arr;
  FILE *fp_count;
  struct arrivals arr;
  struct flightcount fc = {17};
  struct flightcount flight_cnt;
  struct arrivals arr1  = {"1",  "AA1232", "07:00", "07:00", "CHICAGO", ""};
  struct arrivals arr2  = {"2",  "BA123",  "07:05", "07:05", "LONDON", ""};
  struct arrivals arr3  = {"3",  "AA4517", "07:08", "07:15", "BOSTON", ""};
  struct arrivals arr4  = {"4",  "AF123",  "07:10", "07:10", "PARIS", ""};
  struct arrivals arr5  = {"5",  "NH444",  "07:20", "07:20", "TOKYO", ""};
  struct arrivals arr6  = {"6",  "DJ144",  "07:22", "07:22", "MUMBAI", ""};
  struct arrivals arr7  = {"7",  "AZ2348", "07:23", "07:25", "WASHINGTON", ""};
  struct arrivals arr8  = {"8",  "VS9745", "07:25", "07:26", "TORONTO", ""};
  struct arrivals arr9  = {"9",  "DL5816", "07:30", "07:30", "CHICAGO", ""};
  struct arrivals arr10 = {"10", "KL5393", "07:33", "07:33", "MANCHESTER", ""};
  struct arrivals arr11 = {"11", "AZ4627", "07:35", "07:40", "ROME", ""};
  struct arrivals arr12 = {"12", "VS4677", "07:40", "07:40", "NEW ORLEANS", ""};
  struct arrivals arr13 = {"13", "SQ125",  "07:45", "07:45", "FRANKFURT", ""};
  struct arrivals arr14 = {"14", "EI5666", "07:48", "07:48", "LONDON", ""};
  struct arrivals arr15 = {"15", "WS2321", "07:50", "07:50", "DULLES", ""};
  struct arrivals arr16 = {"16", "AA197",  "07:55", "08:00", "SAN FRANCISCO", ""};
  struct arrivals arr17 = {"17", "BS7321", "07:58", "07:48", "SARASOTA", ""};

  fp_count = fopen("flightcnt.dat", "w");
  fwrite(&fc, sizeof(fc), 1, fp_count);
  fclose(fp_count);
  fp_count = fopen("flightcnt.dat", "r");
  fread(&flight_cnt, sizeof(flight_cnt), 1, fp_count);
  printf(" No. flights: %d", flight_cnt.count);
  fclose(fp_count);
  fp_arr = fopen("arrivals.dat", "w");
  fwrite(&arr1,  sizeof(arr), 1, fp_arr);
  fwrite(&arr2,  sizeof(arr), 1, fp_arr);
  fwrite(&arr3,  sizeof(arr), 1, fp_arr);
  fwrite(&arr4,  sizeof(arr), 1, fp_arr);
  fwrite(&arr5,  sizeof(arr), 1, fp_arr);
  fwrite(&arr6,  sizeof(arr), 1, fp_arr);
  fwrite(&arr7,  sizeof(arr), 1, fp_arr);
  fwrite(&arr8,  sizeof(arr), 1, fp_arr);
  fwrite(&arr9,  sizeof(arr), 1, fp_arr);
  fwrite(&arr10, sizeof(arr), 1, fp_arr);
  fwrite(&arr11, sizeof(arr), 1, fp_arr);
  fwrite(&arr12, sizeof(arr), 1, fp_arr);
  fwrite(&arr13, sizeof(arr), 1, fp_arr);
  fwrite(&arr14, sizeof(arr), 1, fp_arr);
  fwrite(&arr15, sizeof(arr), 1, fp_arr);
  fwrite(&arr16, sizeof(arr), 1, fp_arr);
  fwrite(&arr17, sizeof(arr), 1, fp_arr);
  fclose(fp_arr);
  fopen("arrivals.dat", "r");
  printf("\n Flight: Sched: Exp: Origin: Remarks");
  for (i = 0; i < 17; i++) {
    n_read = fread(&arr, sizeof(arr), 1, fp_arr);
    if (n_read == 1) {
      printf(
        "\n%s\t%s\t%s\t%s\t%s\t%s",
        arr.pos, arr.flight_no, arr.sch_arr_time, arr.exp_arr_time, arr.origin,
        arr.remarks);
    } else {
      if (feof(fp_arr)) {
        printf(
          "Error reading arrivals.dat: Unexpected EOF. fp_arr at %p\n", fp_arr);
      } else if (ferror(fp_arr)) { perror("Error reading arrivals.dat"); }
    }
  }
  fclose(fp_arr);
  
  return 0;
}
