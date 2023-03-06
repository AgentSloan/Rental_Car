#include "main.cpp"
#include "Functions_library.h"
#include <cstring>
#include <iostream>
using namespace std;
// THIS IS FOR THE FINAL CODE <D
vector<bool> car1Availability = chevyImpala.getAvailability();
vector<bool> car2Availability = fordTaurus.getAvailability();
vector<bool> car3Availability = volkswagenPassat.getAvailability();
vector<bool> car4Availability = toyotaCorolla.getAvailability();
vector<bool> car5Availability = hondaPilot.getAvailability();

// Create dummy variables
// Define Availiabilty vecot
// vector<bool> car1Availability{true, true, false, true, true, true, true};
// vector<bool> car2Availability{true, true, false, false, false, false, true};
// vector<bool> car3Availability{true, false, false, false, false, false, true};
// vector<bool> car4Availability{true, false, false, false, false, false, true};
// vector<bool> car5Availability{true, true, true, true, true, true, false};
string model1 = chevyImpala.getModel();
string model2 = fordTaurus.getModel();
string model3 = volkswagenPassat.getModel();
string model4 = toyotaCorolla.getModel();
string model5 = hondaPilot.getModel();

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