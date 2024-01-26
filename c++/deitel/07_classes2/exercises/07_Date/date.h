#include <string>


class Date {
 public:
  Date(int, int);         // day of year, year
  Date(int, int, int);    // date, mo, yr
  Date(std::string, int, int); // mo name, date, yr
  void print() const;              // YYYY-MM-DD
  void print_day_of_year() const;  // DDD YYYY
  void print_american() const;     // MM/DD/YY
  void print_long() const;         // June 03, 2020

 private:
  int year;
  int month;
  int date;
};
