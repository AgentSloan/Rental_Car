#include "Car_Class.cpp"
#include "Functions_library.h"
#include <cstring>
#include <iostream>
using namespace std;
// THIS IS FOR THE FINAL CODE <D
// car1.getAvailability();
// vector<bool> car2Availability = car2.getAvailability();
// vector<bool> car3Availability = car3.getAvailability();
// vector<bool> car4Availability = car4.getAvailability();
// vector<bool> car5Availability = car5.getAvailability();
// Create dummy variables
// Car car1;
// Car car2;
// Car car3;
// Car car4;
// Car car5;
// Define Availiabilty vecot
vector<bool> car1Availability{true, true, false, true, true, true, true};
vector<bool> car2Availability{true, true, false, false, false, false, true};
vector<bool> car3Availability{true, false, false, false, false, false, true};
vector<bool> car4Availability{true, false, false, false, false, false, true};
vector<bool> car5Availability{true, true, true, true, true, true, false};
string model1 = "Corvette";
string model2 = "F-150";
string model3 = "Jeep";
string model4 = "Tesla";
string model5 = "mazda furia";

// Define print weekly schedule Function

void printWeeklySchedule() {
  cout << "  Rental Availability (Weekly) # = Available, x = Unavailable"
       << endl
       << "==============================================================="
       << endl
       << "----------|  Sun.   Mon.   Tue.   Wed.   Thu.   Fri.   Sat." << endl
       << model1 << "      ";
  for (int i = 0; i != 7; i++) {
    if (car1Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << model2 << "         ";
  for (int i = 0; i != 7; i++) {
    if (car2Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << model3 << "          ";
  for (int i = 0; i != 7; i++) {
    if (car3Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << model4 << "         ";
  for (int i = 0; i != 7; i++) {
    if (car4Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << model5 << "   ";
  for (int i = 0; i != 7; i++) {
    if (car5Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl;
}

int main() {
  printWeeklySchedule();
  return 0;
}