#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "date.h"


const char* MONTHS[] = {
    "January", "Februrary", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"};


// Since this is just an exercise to familiarize myself with syntax, going to
// simplify and ignore leap years
Date::Date(int day_of_year, int year) {
  // Add validation here
  this->year = year;
  if (day_of_year <= 31) { // jan
    month = 1;
    date = day_of_year;
  } else if (day_of_year <= 31 + 28) { // feb
    month = 2;
    date = day_of_year - 31;
  } else if (day_of_year <= 31 + 28 + 31) { // mar
    month = 3;
    date = day_of_year - 31 - 28;
  } else if (day_of_year <= 31 + 28 + 31 + 30) { // apr
    month = 4;
    date = day_of_year - 31 - 28 - 31;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31) { // may
    month = 5;
    date = day_of_year - 31 - 28 - 31 - 30;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31 + 30) { // jun
    month = 6;
    date = day_of_year - 31 - 28 - 31 - 30 - 31;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31 + 30 + 31) { // jul
    month = 7;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) { // aug
    month = 8;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30 - 31;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) {
    // sep
    month = 9;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31;
  } else if (day_of_year <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) {
    // oct
    month = 10;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30;
  } else if (
      day_of_year <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) {
    // nov
    month = 11;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31;
  } else { // dec
    month = 12;
    date = day_of_year - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30;
  }
}


Date::Date(int date, int month, int year) {
  this->year = year;
  this->month = month;
  this->date = date;
}
  

Date::Date(string mon_str, int date, int year) {
  for (int i = 0; i < 12; i++) {
    if (mon_str.compare(MONTHS[i]) == 0) {
      month = i + 1;
      break;
    }
  }
  this->date = date;
  this->year = year;
}


void Date::print() const { cout << year << "-" << month << "-" << date; }


void Date::print_day_of_year() const {
  // DDD YYYY
  int n_days = 0;
  int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int m = 1;
  while (m < month) {
      n_days += days_per_month[m - 1];
  }
  n_days += date;
  cout << setw(3) << setfill('0') << n_days << " " << setw(4) << setfill(' ')
       << year;
}


void Date::print_american() const {
  // MM/DD/YY
  int year_2_digit = year % 100;
  cout << setw(2) << setfill('0') << month << "/" << date << "/"
       << year_2_digit << setfill(' ');
}


void Date::print_long() const {
  string month_str = MONTHS[month - 1];
  cout << month_str << " " << setw(2) << setfill('0') << date << ", " << year;
}
