#include <iostream>
#include <limits> // numeric_limits

using namespace std;

int main() {
  char tryAgain;

  cout << "---------------------------------------\n"
       << "|    ˖⁺‧₊˚ ♡ ˚₊‧⁺˖ ♡ ˖⁺‧₊˚ ♡ ˚₊‧⁺˖    |\n"
       << "|   Welcome to the Change Calculator! |\n"
       << "|   Enter the total change as an      |\n"
       << "|   integer to see the fewest coins   |\n"
       << "|   needed to make up that change.    |\n"
       << "|    ˖⁺‧₊˚ ♡ ˚₊‧⁺˖ ♡ ˖⁺‧₊˚ ♡ ˚₊‧⁺˖    |\n"
       << "---------------------------------------\n";

  do {
    int change;
    cout << "\nEnter the total change as an integer: ";

    // input validation loop
    while (!(cin >> change)) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "\nInvalid input. Please enter an integer: ";
    }

    // coin calculation
    if (change == 0) {
      cout << "\nNo change.\n\n";
    } else {
      int dollars = change / 100;
      change = change % 100;
      int quarters = change / 25;
      change = change % 25;
      int dimes = change / 10;
      change = change % 10;
      int nickels = change / 5;
      int pennies = change % 5;

      // Output formatting
      cout << "\nHere is the fewest number of coins needed:\n";
      cout << "\n";

      if (dollars > 0) {

        if (dollars == 1) {
          cout << "1 Dollar\n";
        } else {
          cout << dollars << " Dollars\n";
        }
        cout << "                             \n";
      }

      if (quarters > 0) {

        if (quarters == 1) {
          cout << "1 Quarter\n";
        } else {
          cout << quarters << " Quarters\n";
        }
        cout << "                             \n";
      }

      if (dimes > 0) {

        if (dimes == 1) {
          cout << "1 Dime\n";
        } else {
          cout << dimes << " Dimes\n";
        }
        cout << "                             \n";
      }

      if (nickels > 0) {

        if (nickels == 1) {
          cout << "1 Nickel\n";
        } else {
          cout << nickels << " Nickels\n";
        }
        cout << "                             \n";
      }

      if (pennies > 0) {

        if (pennies == 1) {
          cout << "1 Penny\n";
        } else {
          cout << pennies << " Pennies\n";
        }
        cout << "                             \n";
      }
    }
    cout << "Do you want to try again? (Y/N): ";
    cin >> tryAgain;

  } while (tryAgain == 'Y' || tryAgain == 'y');

  cout << "\n";
  cout << "---------------------------------------\n";
  cout << "|      Thank you for using the        |\n";
  cout << "|       Change Calculator program     |\n";
  cout << "|        Have a great day!            |\n";
  cout << "|           ヾ( ˃ᴗ˂ )◞ • *✰           |\n";
  cout << "---------------------------------------\n";

  return 0;
}
