#ifndef SALESPERSON_H
#define SALESPERSON_H


class Salesperson {
 public:
  Salesperson();
  void get_sales_from_user();
  void set_sales(int, double);
  void print_annual_sales();

 private:
  double total_annual_sales();
  double sales[12];
};


#endif
