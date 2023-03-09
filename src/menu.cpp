//#include "Functions_library.h"
#include "menu.h"
#include "Rent_and_Return.h"
#include "WeeklySchedule.h"
#include <chrono>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
#include <thread>
using namespace std;

void menu(vector<Car> ourCars) {
  char chose = '0';
  char confirm = 'n';
  double test;
  int day;
  string car = " ";
  cout << "=====Welcome to KArL & J Rental=====" << endl;
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
    case '1':

      cout << "Please pick from availible cars typing the car's name" << endl;
      printWeeklySchedule(ourCars);
      if (printWeeklySchedule(ourCars) == -1){
          cout << "Car not found" << endl;
      }
      cout << "Enter in Day of week Sun-saturday (1-7)" << endl;
      cin >> day;
    
      test = Rent(car, day, ourCars);
      cout << "Your axpoximate total is " << test << endl
           << "please confirm (y/n)" << endl;
      cin >> confirm;
      if (confirm != 'y') {
        break;
      }
      loading();
      // the whole point is to rent a car if that is done then should it exit?
      break;
    case '2':
      return_car(ourCars,day);
      re_loading();
      cout << "Thank You :) " << endl
           << "Your total is $<days_rented> * <price of car>" << endl;
      break;
    case '3':
      printWeeklySchedule(ourCars);
      break;
    case '0':
      cout << "Goodbye :)" << endl;
      exit(0);
    default:
      cout << "please enter a valid option" << endl;
    }

  } while (chose != '0');
}

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

// test call, can be deleted when implemented to main
// int main() {
// //   // re_loading();
//   menu();
//   return 0;
// }
// hi
// this is the 100th line of code :)