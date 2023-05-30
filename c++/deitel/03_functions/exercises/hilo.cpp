#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


void compare(int guess, int answer) {
  if (guess < answer) {
    cout << "Too low!";
  } else {
    cout << "Too high!";
  }
}


int main() {
  srand(time(0));
  const int MAX = 1000;
  int answer = rand()%MAX + 1;
  int guess = 0;
  int n_tries = 0;

  cout << "Guess a number between 1 and " << MAX << ": ";
  cin >> guess;
  while (guess != answer) {
    compare(guess, answer);
    n_tries++;
    cout << " Try again: ";
    cin >> guess;
  }
  cout << "You got it in " << n_tries << " tries!" << endl;
  return 0;
}

    
