#include <iostream>
#include <iomanip> // for setprecision()

using namespace std;

int main() {
    double mpg, gasPrice;

    // Prompt user for input
    cout << "Enter car's MPG (miles per gallon): ";
    cin >> mpg;
    cout << "Enter gas price per gallon: $";
    cin >> gasPrice;
    
    // Calculate gas cost for 20 miles, 75 miles, and 500 miles
    double gasCost20 = 20 / mpg * gasPrice;
    double gasCost75 = 75 / mpg * gasPrice;
    double gasCost500 = 500 / mpg * gasPrice;

    // Output results with two digits after the decimal point
    cout << fixed << setprecision(2);
    cout << "Gas cost for 20 miles: $" << gasCost20 << endl;
    cout << "Gas cost for 75 miles: $" << gasCost75 << endl;
    cout << "Gas cost for 500 miles: $" << gasCost500 << endl;

    return 0;
}
// Check "algoplan" in files for psuedocode. 