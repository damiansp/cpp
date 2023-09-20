#include <iostream>
using namespace std;


class Date {
  public:
    Date(int=1990, int=1, int=1);
    void print();
  private:
    int year;
    int month;
    int day;
};


Date::Date(int y, int m, int d) {
  year = y;
  month = m;
  day = d;
}


void Date::print() { cout << year << '-' << month << '-' << day; }


int main() {
  Date birthday(2021, 9, 5), default_date;

  cout << "Birthday: ";
  birthday.print();
  cout << "\nDefault date: ";
  default_date.print();
  cout << endl;
  return 0;
}

  
