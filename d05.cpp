/******************************************************************************
# Author:           Courtney
# Lab:              Discussion #5
# Date:             May 1st, 2023
# Description:      Creates a login 
# Input:            The user's first name (a string), The user's last name (a string)
A four-digit number (an integer)
# Output:           a login name based on the user's first name, last name, and a four-digit number input by the user.
# Sources:          None
#******************************************************************************/
#include <cctype>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

using namespace std;

// check if the string s contains only letters
bool isAllLetters(const string &s) {
  for (char c : s) {
    if (!isalpha(c)) {
      return false;
    }
  }
  return true;
}

// function for input validation
string getValidName(const string &prompt) {
  string name;
  while (true) {
    cout << prompt;
    cin >> name;
    if (!isAllLetters(name) || name.empty() || name.length() <= 1) {
      cout << "\ninvalid input. please enter a valid name!" << endl;
    } else {
      return name;
    }
  }
}

int main() {
  string firstName, lastName, loginName;
  int number;
  // display welcome
  cout << "----------------------------------------\n"
       << "|          ♡〜٩( ˃▿˂ )۶〜♡             |\n"
       << "|    welcome to the login maker!       |\n"
       << "|             ✩˖ ࣪‧₊˚໒꒱⋆✩              |\n"
       << "----------------------------------------\n";

  // get first and last name
  firstName = getValidName("\nto start, please enter your first name ♡ : ");
  lastName = getValidName("\nenter your last name ♡ : ");

  // input number, with validation for non-numeric input and number < 1000 or
  // number >= 10000
  while (true) {
    cout << "\nenter four-digit number ♡ : ";
    cin >> number;

    if (cin.fail()) {
      cout << "\ninvalid input. please enter intergers!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (number < 1000 || number >= 10000) {
      cout << "\nnumber must be four digits long!" << endl;
    } else {
      break;
    }
  }

  // create login name
  loginName = lastName.substr(0, min(5, (int)lastName.length())) +
              firstName.substr(0, 1) + to_string(number % 100);

  // output login name
  cout << "\nyour login name is: " << loginName << endl << endl;

  cout << "-----------------------------------------\n"
       << "|  thank you for using the login maker! |\n"
       << "|             (ﾉ^ヮ^)ﾉ*:・ ﾟ✧           |\n"
       << "|          ♡ have a great day ♡         |\n"
       << "-----------------------------------------\n";

  return 0;
}
