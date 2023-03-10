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

string model1 = "Impala";
string model2 = "Taurus";
string model3 = "Passat";
string model4 = "Corolla";
string model5 = "Pilot";

void carPrint(vector<bool> carAvailability) {
  for (int i = 0; i != 7; i++) {
    if (carAvailability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "✔      ";
    }
  }
}

// Define print weekly schedule Function
void printWeeklySchedule(vector<Car> ourCars) {
  vector<bool> car1Availability = ourCars[0].getAvailability();
  vector<bool> car2Availability = ourCars[1].getAvailability();
  vector<bool> car3Availability = ourCars[2].getAvailability();
  vector<bool> car4Availability = ourCars[3].getAvailability();
  vector<bool> car5Availability = ourCars[4].getAvailability();
  cout << "  Rental Availability (Weekly) ✔ = Available, x = Unavailable"
       << endl
       << "==============================================================="
       << endl
       << "----------|  Sun.   Mon.   Tue.   Wed.   Thu.   Fri.   Sat." << endl
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
}
