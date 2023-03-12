#include "weekly_schedule.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// THIS IS FOR THE FINAL CODE <D

// Create dummy variables
// Define Availiabilty vecot
// vector<bool> car1Availability{true, true, false, true, true, true, true};
// vector<bool> car2Availability{true, true, false, false, false, false, true};
// vector<bool> car3Availability{true, false, false, false, false, false, true};
// vector<bool> car4Availability{true, false, false, false, false, false, true};
// vector<bool> car5Availability{true, true, true, true, true, true, false};

// Create Variables to print the car names in the schedule
string model1 = "Impala";
string model2 = "Taurus";
string model3 = "Passat";
string model4 = "Corolla";
string model5 = "Pilot";

// Preconditions: Rent_and_return has modified the boolean vector to reflect the
// Car availability
// Postconditions: Prints ✔ or x
// Goal: Prints ✔ or x depending on the value (True/False) in the weekly
// schedule
void carPrint(vector<bool> carAvailability) {
  // Create loop that will iterate through the availability vector
  for (int i = 0; i != 7; i++) {
    // If-else statements will print a ✔ or x.
    if (carAvailability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "✔      ";
    }
  }
}

// Define print weekly schedule Function
void printWeeklySchedule(vector<Car> ourCars) {
  // Create a vector for each vehicle, each vector will be set to the boolean
  // vector attribute getAvailability.
  vector<bool> car1Availability = ourCars[0].getAvailability();
  vector<bool> car2Availability = ourCars[1].getAvailability();
  vector<bool> car3Availability = ourCars[2].getAvailability();
  vector<bool> car4Availability = ourCars[3].getAvailability();
  vector<bool> car5Availability = ourCars[4].getAvailability();
  // Print the Header for the schedule
  cout << "  Rental Availability (Weekly) ✔ = Available, x = Unavailable"
       << endl
       << "==============================================================="
       << endl
       << "----------|  Sun.   Mon.   Tue.   Wed.   Thu.   Fri.   Sat."
       << endl
       // Start the Printing process that will print the model name, and call
       // the carPrint function to print the availability
       << model1 << "        ";
  carPrint(car1Availability);
  cout << endl << model2 << "        ";
  carPrint(car2Availability);
  cout << endl << model3 << "        ";
  carPrint(car3Availability);
  cout << endl << model4 << "       ";
  carPrint(car4Availability);
  cout << endl << model5 << "         ";
  carPrint(car5Availability);
  cout << endl;
  // End of Code
}
