#include <iostream>
using namespace std;


void handle_economy_ticet(int[10]);
void handle_first_class_ticket(int[10]);


void handle_economy_ticket(int seats[10]) {
  bool is_assigned = false;
  for (int i = 5; i < 10; i++) {
    if (seats[i] == 0) {
      seats[i] = 1;
      is_assigned = true;
      cout << "You have seat #" << i + 1 << endl;
      return;
    }
  }
  if (!is_assigned) {
    char change;
    cout << "No seats left in economy, 1st class ok? (y/n): ";
    cin >> change;
    if (change == 'y' || change == 'Y')	{
      handle_first_class_ticket(seats);
    } else {
      cout << "The next flight is in 3 hours." << endl;
    }
  }
}


void handle_first_class_ticket(int seats[10]) {
  bool is_assigned = false;
  
  for (int i = 0; i < 5; i++) {
    if (seats[i] == 0) {
      seats[i] = 1;
      is_assigned = true;
      cout << "You have seat #" << i + 1 << endl;
      return;
    }
  }
  if (!is_assigned) {
    char change;
    cout << "No seats left in 1st class, economy ok? (y/n): ";
    cin >> change;
    if (change == 'y' || change == 'Y') {
      handle_economy_ticket(seats);
    } else {
      cout << "The next flight is in 3 hours." << endl;
    }
  }
}


bool is_full(int seats[10]) {
  for (int i = 0; i < 10; i++) {
    if (seats[i] == 0) {
      return false;
    }
  }
  return true;
}


int main() {
  int seats[10] = {0};
  int type;

  cout << "Enter 1 for 1st class or 2 for economy (any other key to exit): ";
  cin >> type;
  while (type == 1 || type == 2) {
    if (type == 1) {
      handle_first_class_ticket(seats);
    } else if (type == 2) {
      handle_economy_ticket(seats);
    }
    if (is_full(seats)) {
      cout << "This flight is full. The next flight is in 3 hours" << endl;
      break;
    }
    cout << "Enter 1 for 1st class or 2 for economy (any other key to exit): ";
    cin >> type;
  }
  return 0;
}
