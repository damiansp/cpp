#include <math.h>
#include <stdio.h>


float calculate_charge(float hrs);


int main() {
  const int N_CARS = 3;
  float hours[N_CARS] = {1.5, 4., 24.};
  float total_hours = 0.,
    total_revenue = 0;
  float car_hrs = 0.;
  float fee = 0.;

  printf("  Car  Hours  Charge\n");
  for (int i = 0; i < N_CARS; i++) {
    car_hrs = hours[i];
    fee = calculate_charge(car_hrs);
    printf("    %d   %4.2f   %5.2f\n", i + 1, hours[i], fee);
    total_hours += car_hrs;
    total_revenue += fee;
  }
  printf("TOTAL   %4.2f   %5.2f\n", total_hours, total_revenue);

  return 0;
}


float calculate_charge(float hrs) {
  const float BASE_AMT = 2.;
  const float AMT_PER_HALF_HR = 0.5;
  const float MAX_DAILY_FEE = 10.;
  float amt =  BASE_AMT;

  hrs -= 3.;
  if (hrs > 0) {
    int additional_half_hours = ceil(hrs / 0.5);
    amt += AMT_PER_HALF_HR * additional_half_hours;
  }
  if (amt > MAX_DAILY_FEE) { amt = MAX_DAILY_FEE; }
  return amt;
}
