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
char rollup_char;
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

  return 0;
}
