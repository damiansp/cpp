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
  for (int i = MAX; i >= 1; i /= 2) {
    compare(guess, answer);
    n_tries++;
    cout << " Try again: ";
    cin >> guess;
  }
  if (guess == answer) {
    cout << "Congratulations, you guessed in the allowed range!" << endl;
  } else {
    cout << "Womp. Womp. You should have been able to guess by now." << endl;
  }
  return 0;
}

    
