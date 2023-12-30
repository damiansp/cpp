class Date {
 public:
  //Date(int, int);        // day of year, year 
  Date(int, int, int);   // date, mo, yr
  Date(char*, int, int); // mo name, date, yr
  void print() const;              // YYYY-MM-DD
  void print_day_of_year() const;  // DDD YYYY
  void print_american() const;     // MM/DD/YY
  void print_long() const;         // June 03, 2020

 private:
  int year;
  int month;
  int date;
};


// Since this is just an exercise to familiarize myself with syntax, going to
// simplify and ignore leap years
Date::Date(int day_of_year, int year) {
  // Add validation here
  this.year = year;
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
