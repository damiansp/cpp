#include <iomanip>
#include <iostream>
using namespace std;


const int STAFF = 4;
const int N_PRODUCTS = 5;


void update_sales(int id, double sales[STAFF + 1][N_PRODUCTS + 1]) {
  double total = 0;
  double item_amt;

  cout << "Enter sales for product ids 0 - 4 in order separated by a space: ";
  for (int item_no = 0; item_no < N_PRODUCTS; item_no++) {
    cin >> item_amt;
    sales[id][item_no] = item_amt;
    total += item_amt;
  }
  sales[id][N_PRODUCTS] = total;
}


void get_product_totals(double sales[STAFF + 1][N_PRODUCTS + 1]) {
  for (int item_no = 0; item_no <= N_PRODUCTS; item_no++) {
    double item_total = 0;
    for (int salesperson = 0; salesperson < STAFF; salesperson++) {
      item_total += sales[salesperson][item_no];
    }
    sales[STAFF][item_no] = item_total;
  }
}


void print_header() {
  cout << setw(11) << "" << " Product ID:" << endl;
  cout << setw(11) << "";
  for (int i = 0; i < N_PRODUCTS; i++) {
    cout << setw(7) << i << " ";
  }
  cout << setw(8) << "Total" << endl;
  cout << "Salesperson" << endl;
}


void print_totals(double sales[STAFF + 1][N_PRODUCTS + 1]) {
  cout << setw(11) << "Total" << " ";
  for (int item_no = 0; item_no <= N_PRODUCTS; item_no++) {
    cout << setw(7) << setiosflags(ios::fixed | ios::showpoint)
         << setprecision(2) << sales[STAFF][item_no] << " ";
  }
}


void print_sales(double sales[STAFF + 1][N_PRODUCTS + 1]) {
  print_header();
  for (int id = 0; id < STAFF; id++) {
    cout << setw(11) << id << " ";
    for (int item_no = 0; item_no <= N_PRODUCTS; item_no++) {
      cout << setw(7) << setiosflags(ios::fixed | ios::showpoint)
           << setprecision(2) << sales[id][item_no] << " ";
    }
    cout << endl;
  }
  print_totals(sales);
  cout << endl;
}


int main() {
  double sales[STAFF + 1][N_PRODUCTS + 1] = {0}; // +1s for totals
  for (int salesperson = 0; salesperson < STAFF; salesperson++) {
    update_sales(salesperson, sales);
  }
  get_product_totals(sales);
  print_sales(sales);
}
