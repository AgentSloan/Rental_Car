//#include "Functions_library.h"
#include "menu.h"
#include "rent_and_return.h"
#include "weekly_schedule.h"
#include <chrono>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <thread>
using namespace std;

void menu(vector<Car> ourCars) {
  char chose = '0';
  char confirm = 'n';
  double price;
  int day;
  string car = " ";
  cout << "=====Welcome to KArL & J Rental=====" << endl;

  // menu do-while loop
  do {
    car = " ";
    chose = '0';
    cout << "Would you like to " << endl
         << " 0) Quit" << endl
         << " 1) Rent a Car" << endl
         << " 2) Return a Car" << endl
         << " 3) See reservation schedule" << endl;
    cin >> chose;
    switch (chose) {

    // Rent a car case
    case '1':
      cout << "Please pick from available cars typing the car's name" << endl;
      printWeeklySchedule(ourCars);
      cin >> car;
      day = chooseDay();
      price = Rent(car, day, ourCars);
      if (price < 1) {
        break;
      }
      cout << "Your approximate total is $" << price << endl
           << "please confirm (y/n) " << endl;
      cin >> confirm;
      if (confirm != 'y') {
        break;
      }
      loading();
      break;

    // return a car case
    case '2':
      return_car(ourCars);
      re_loading();
      break;

    // if you only want to see schedule
    case '3':
      printWeeklySchedule(ourCars);
      break;
    case '0':
      cout << "Goodbye :)" << endl;
      exit(0);
    default:
      cout << "Please enter a valid option" << endl;
    }

  } while (chose != '0');
}

// which day to start rent
int chooseDay() {
  int day;

  // try-catch-throw stretch
  try {
    cout << "Enter in first day of week you are renting. Sunday-Friday (1-6)"
         << endl;
    cin >> day;
    if (day < 1 || day > 6) {
      throw runtime_error("Please enter available day");
    }
  } catch (runtime_error &exeptObject) {
    cerr << exeptObject.what() << endl;
    chooseDay();
  }
  return day;
}

// loading animation
void loading() {
  char a = ' ';
  for (int i = 115, j = 0; i >= 15; i--) {
    cout << endl << endl << endl << endl << endl << endl;
    cout << endl << endl << endl << endl << endl << endl;
    cout << setw(i) << "     _____      " << endl
         << setw(i) << " ___/__|__|____ " << endl
         << setw(i) << "{______________}" << endl
         << setw(i) << " <>         <>  " << endl;
    cout << "Loading... " << j << "% complete " << endl;
    j++;
    this_thread::sleep_for(chrono::milliseconds(50));
  }
  cout << endl;
  cout << "Your car is ready for pick up" << endl;
}

// return animation
void re_loading() {
  for (int i = 15, j = 0; i <= 115; i++) {
    cout << endl << endl << endl << endl << endl << endl;
    cout << endl << endl << endl << endl << endl << endl;
    cout << setw(i) << "     _____     " << endl
         << setw(i) << R"( ____|__|__\___ )" << endl
         << setw(i) << "{______________}" << endl
         << setw(i) << " <>         <>  " << endl;
    cout << "Loading... " << j << "% complete " << endl;
    j++;
    this_thread::sleep_for(chrono::milliseconds(50));
  }
  cout << endl;
  cout << "Your car is successfully returned" << endl;
}
