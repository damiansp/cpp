#include <iostream>
using namespace std;


void f1(int);
void f2(int);
void f3(int);


int main() {
  void (*f[3])(int) = {f1, f2, f3};
  int choice;

  cout << "Enter a number between 0 and 2; 3 to end: ";
  cin >> choice;
  while (choice >= 0 && choice < 3) {
    (*f[choice])(choice);
    cout << "Enter a number between 0 and 2; 3 to end: ";
    cin >> choice;
  }
  cout << "The end." << endl;
  return 0;
}


void f1(int a) {
  cout << "\nEntered: " << a << "; printing 2x: " << 2 * a << endl;
}


void f2(int a) {
  cout << "\nEntered: " << a << "; printing x^2: " << a * a << endl;
}


void f3(int a) {
  cout << "\nEntered: " << a << "; printing (2x)^2: " << 2 * a * 2 * a << endl;
}
