#include "Functions_library.h"
#include <cstring>
#include <iostream>
#include "Car_Class.cpp"
using namespace std;

// Create dummy variables
Car car1;
Car car2;
Car car3;
Car car4;
Car car5;
// Define Availiabilty vecot
vector<bool> car1Availability = car1.getAvailability();
vector<bool> car2Availability = car2.getAvailability();
vector<bool> car3Availability = car3.getAvailability();
vector<bool> car4Availability = car4.getAvailability();
vector<bool> car5Availability = car5.getAvailability();
string sport = "Corvette";
string utility = "F-150";
string OffRoad = "Jeep";
string daily = "Tesla";
string cool = "mazda furia";

// Define print weekly schedule Function

void printWeeklySchedule() {
  cout << "  Rental Availability (Weekly) # = Available, x = Unavailable"
       << endl
       << "==============================================================="
       << endl
       << "----------|  Sun.   Mon.   Tue.   Wed.   Thu.   Fri.   Sat." << endl
       << sport << "      ";
  for (int i = 0; i != 7; i++) {
    if (car1Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << utility << "         ";
  for (int i = 0; i != 7; i++) {
    if (car2Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << daily << "         ";
  for (int i = 0; i != 7; i++) {
    if (car3Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << cool << "   ";
  for (int i = 0; i != 7; i++) {
    if (car4Availability.at(i) == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << OffRoad << "          ";
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