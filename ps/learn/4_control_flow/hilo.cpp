#include <iostream>

using namespace std;


int main() {
  int number = 58;
  int guess = 0;
  int tries = 1;

  cout << "Guess a number between 1 and 100\n> ";
  while (guess != number) {
    cin >> guess;
    if (guess == -1) {
      cout << "Nobody likes a quitter. Bye.\n\n";
      return 0;
    }
    if (guess == number) {
      cout << "You got it, in just " << tries << " tries!\nGame Over.\n\n";
      return 0;
    }
    if (number > guess) {
      cout << "Higher. Try again (-1 to quit)\n> ";
    } else {
      cout << "Lower. Try again (-1 to quit)\n> ";
    }
    tries++;
  }
}
