#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


int random_digit() {
  return rand() % 10;
}


int present_problem() {
  int a = random_digit();
  int b = random_digit();
  cout << "\n " << a << endl;
  cout << "x" << b << endl;
  cout << "--" << endl;
  return a * b;
}


int main() {
  srand(time(0));
  int n_correct = 0;
  int n;

  cout << "Enter number of problems to solve: ";
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int answer = present_problem();
    int answer_given;
    cin >> answer_given;
    if (answer_given == answer) {
      cout << "Correct!" << endl;
      n_correct++;
    } else {
      cout << "Sorry, the correct answer is " << answer << endl;
    }
  }
  cout << "All done for now.  You got " << n_correct << " out of " << n
       << " correct!" << endl;
  return 0;
}
