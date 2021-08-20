#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


int main() {
  string name;
  cout << "Who are you? ";
  cin >> name;

  string greeting = "Hello, " + name;
  if (name == "Damian") greeting += ". Welcome back!";
  else greeting += ". I don't know who y'are!";
  cout << greeting << '\n';

  int len = greeting.length();
  cout << "The greeting is just " << len << " chars long\n";

  string body = greeting.substr(greeting.find(' ') + 1);
  cout << body << '\n';
  return 0;
}
