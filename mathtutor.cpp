// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Courtney Tran
# Lab:              Discussion #2
# Date:             April 17, 2023
# Description:      math tutor for a young student
# Input:            pressing the enter key
# Output:           two randomly generated numbers for addition
# Sources:          None
#******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// constants for the range of random numbers
const int MIN_NUM = 1;
const int MAX_NUM = 999;

int main() {
    // seed the random number generator with current time
    srand(time(0));

    // variable to control the loop
    bool continueLoop = true;

    // loop until user chooses to exit
    while (continueLoop) {
        // display welcome message and equation
        cout << "What is the answer? Press enter to display!" << endl;
        cout << endl;
        int num1 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        int num2 = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;
        cout << "  " << num1 << endl;
        cout << "+ " << num2 << endl;
        cout << "--------" << endl;

        // wait for user to press enter
        cin.ignore();

        // calculate the result
        int result = num1 + num2;

        // display the result
        cout << "  " << result << endl;

        // prompt user to exit or continue
        cout << "" << endl;
        cout << "Press 'C' to continue  or 'E' to exit: ";
        char choice;
        cin >> choice;
        if (choice == 'E' || choice == 'e') {
            continueLoop = false;
        }
        // clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}
