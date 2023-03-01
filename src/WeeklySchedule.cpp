#include "Functions_library.h"
#include <cstring>
#include <iostream>
using namespace std;

// Create dummy variables
bool car1 = false;
bool car2 = true;
bool car3 = false;
bool car4 = true;
bool car5 = false;
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
       << "----------|  Mon.   Tue.   Wed.   Thu.   Fri.   Sat.   Sun." << endl
       << sport << "      ";
  for (int i = 0; i != 7; i++) {
    if (car1 == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << utility << "         ";
  for (int i = 0; i != 7; i++) {
    if (car2 == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << daily << "         ";
  for (int i = 0; i != 7; i++) {
    if (car3 == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << cool << "   ";
  for (int i = 0; i != 7; i++) {
    if (car4 == false) {
      cout << "x      ";
    } else {
      cout << "#      ";
    }
  }
  cout << endl << OffRoad << "          ";
  for (int i = 0; i != 7; i++) {
    if (car5 == false) {
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