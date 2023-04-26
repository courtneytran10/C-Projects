// NOTE: This template is to be used for partner practice ONLY! You must
// use the required Algorithmic Design Document for all Assignments.
/******************************************************************************
# Author:           Courtney Tran
# Lab:              Day 2
# Date:             April 5, 2023
# Description:      This progam prompts for an age and calculates birth year
# Input:            string name, integer age
# Output:           integer birth year
# Sources:          none
#******************************************************************************/

// variables
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

int main() {
 // get current year 
 auto current_year = std::chrono::system_clock::now();
 auto current_year_time = std::chrono::system_clock::to_time_t(current_year);
 int current_year_number = localtime(&current_year_time)->tm_year + 1900;

 // get users name
  std::string person_name; 
  std::cout << "Welcome to the birth year calculator program!" << std::endl;
  std::cout << "Enter your name: ";
  std::cin >> person_name; 

 // get users age
  int person_age; 
  std::cout << "Enter your age at the end of this year: ";
  std::cin >> person_age;

 // calculate birth year
  int birth_year = current_year_number - person_age;

 // output result
 std::cout << "Hello " << person_name << "! You were born in " << birth_year << "!" << std::endl;
 std::cout << "Goodbye." << std::endl;

   return 0;
}
// birth_year (int) 
// birth_year = current year - age
//chrono = real time
//
