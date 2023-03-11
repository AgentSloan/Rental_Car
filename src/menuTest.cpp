#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
using namespace std;

void testloading() {
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
void testre_loading() {
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

int chooseDay() {
  int day;
  try {
    cout << "Enter in Frist day of week you are renting. Sun-Friday (1-6)"
         << endl;
    cin >> day;
    if (day < 1 || day > 6) {
      throw runtime_error("Please enter aviable day");
    }
  } catch (runtime_error &exeptObject) {
    cerr << exeptObject.what() << endl;
    chooseDay();
  }
  return day;
}

void menuTest() {
  char chose = '0';
  char confirm = 'n';
  double price;
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
      cout << "calls printWeeklySchedule()" << endl;
      //   if (printWeeklySchedule(ourCars) == -1) {
      //     cout << "Car not found" << endl;
      //   }
      cin >> car;
      chooseDay();
      // price = Rent(car, day, ourCars);
      cout << "Your axpoximate total is "
           << "price" << endl
           << "please confirm (y/n)" << endl;
      cin >> confirm;
      if (confirm != 'y') {
        break;
      }
      testloading();
      // the whole point is to rent a car if that is done then should it exit?
      break;
    case '2':
      cout << "calls return_car() function" << endl;
      this_thread::sleep_for(chrono::milliseconds(1000));
      testre_loading();
      cout << "Thank You :) " << endl
           << "Your total is $"
           << "price" << endl;
      break;
    case '3':
      cout << " calls printWeeklySchedule()";
      break;
    case '0':
      cout << "Goodbye :)" << endl;
      exit(0);
    default:
      cout << "please enter a valid option" << endl;
    }

  } while (chose != '0');
}

int main() {
  menuTest();
  return 0;
}