#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void non_rollup();
void rollup();


struct arrivals {
  char pos[3];
  char flight_no[8];
  char sch_arr_time[6];
  char exp_arr_time[6];
  char origin[15];
  char remarks[14];
};

struct flight_count {
  int count;
};


char flight_no[8];
char str[20];
char c;
char new_sch_arr_time[6];
char new_exp_arr_time[6];
char new_origin[15];
char new_remarks[14];
char do_rollup;
char oldname[] = "arrivals2.dat";
char newname[] = "arrivals2.dat";
int ret;
int opt, opt2;
int eof_check;
int lim;
int remans;
int i;

FILE *source, *target;
FILE *fp_arr, *fp_arr2;
FILE *flight_counts;

struct arrivals arr1;
struct arrivals arr_arr[17];
struct flight_count fc;


int main() {
  flight_counts = fopen("flightcnt.dat", "r");
  fread(&fc, sizeof(fc), 1, flight_counts);
  opt2 = fc.count;
  fclose(flight_counts);
  fp_arr = fopen("arrivals.dat", "r");
  printf("\nFlight\tSched\tExp\tOrigin\tRemarks");
  for (i = 0; i < 17; i++) {
    if (fread(&arr1, sizeo(arr1), 1, fp_arr) == 1) {
      strcpy(arr_arr[i].pos, arr1.pos);
      strcpy(arr_arr[i].flight_no, arr1.flight_no);
      strcpy(arr_arr[i].sch_arr_time, arr1.sch_arr_time);
      strcpy(arr_arr[i].exp_arr_time, arr1.exp_arr_time);
      strcpy(arr_arr[i].origin, arr1.origin);
      strcpy(arr_arr[i].remarks, arr1.remarks);
      lim = (opt2 < 12) ? opt2 : 12;
      if (i < lim) {
        prinf(
          "\n%s\t%s\t%s\t%s\t%-12s\t%s",
          arr1.pos, arr1.flight_no, arr1.sch_arr_time, arr1.exp_arr_time,
          arr1.origin, arr1.remarks);
      }
    }
  }
  fclose(fp_arr);
  printf("\nroll up? (y/n)\n");
  scanf(" %c", &do_rollup);
  if (rollup == 'y') { rollup(); }
  else if (rollup == 'n') { non_rollup(); }
  else { printf("Bad do_rollup value: %c\n", do_rollup); }

  return 0;
}
