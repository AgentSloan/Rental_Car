#include "Car_Class.h"
#include <iostream>
#include <vector>
using namespace std; // g++ main.cpp menu.cpp Rent_and_Return.cpp
                     // WeeklySchedule.cpp -o a.out to run code

// Use to Rent a car till end of week
double Rent(string car, int day, vector<Car>& tempcar) {
  bool repeat = true;
  day = day - 1;
  while (repeat == true) {

    int DaysRented;
    cout << "How many days are your renting your car?" << endl;
    cin >> DaysRented;
    for (int i = 0; i < tempcar.size(); i++) {
      if (car == tempcar[i].getModel()) {
        if ((DaysRented + day) >= 0 && (DaysRented + day) < 7) {
          if (tempcar[i].getAvailability(day) == true) {
            for (int j = 1; j < DaysRented; j++) {
              tempcar[i].setAvailability(day, false);
              tempcar[i].setDaysRented(DaysRented);
              cout << tempcar[i].getModel() << " " << tempcar[i].getDaysRented()
                   << endl;
            }
            return 100.00; // tempcar[i].getPrice();
          } else {
            cout << "Sorry this car is not avabile please try again" << endl;
            return -1; // Requested car is not avalable
          }
        } else {
          cout << "Sorry you can only rent within the current week" << endl;
          return -1;
        }
      }
    }
    cout << "Sorry that is not a car we have try again" << endl;
    return -1;
  }
  return -1;
}
// to return a car
void return_car(vector<Car>& tempcar) {
  string car;
  string responce;
  cout << "Please enter the model of your returned car" << std::endl;
  cin >> car;
  int temp = 0;
  for (int i = 0; i < tempcar.size(); i++) {
    if (tempcar[i].getModel() == car) {
      cout << "The car you are returning is " << tempcar[i].getMake() << " "
           << tempcar[i].getModel() << " which was rented for "
           << tempcar[i].getDaysRented() << " days" << endl;
      cout << "Please confirm this is the correct car(y/n)";
      cin >> responce;
      if (responce == "y") {
        for (int j = 0; j < tempcar[i].getDaysRented(); j++) {
          tempcar[i].setAvailability(j, true);
        }
        tempcar[i].setDaysRented(0);
        cout << "Your rented car is returned" << std::endl;
        return;
      }
    }
  }
  cout << "Sorry that is not one of our cars." << endl;
}