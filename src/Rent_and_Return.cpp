#include "Car_Class.h"
#include <iostream>
#include <vector>
using namespace std; // g++ main.cpp menu.cpp Rent_and_Return.cpp
                     // WeeklySchedule.cpp -o a.out to run code

// Use to Rent a car till end of week
double Rent(string car, int day, vector<Car> &tempcar) {
  bool repeat = true;
  day = day - 1;
  if (day == -1 || day > 6) {
    cout << "Sorry we do not rent out Saturday as we are not open.";
    return -1;
  }
  int DaysRented;
  cout << "How many days are your renting your car?" << endl;
  cin >> DaysRented;
  for (int i = 0; i < tempcar.size(); i++) {
    if (car == tempcar[i].getModel()) {
      if ((DaysRented + day) >= 0 && (DaysRented + day) < 7) {
        if (tempcar[i].getAvailability(day) == true) {
          for (int j = 0; j < DaysRented; j++) {
            tempcar[i].setAvailability((day + j), false);
            tempcar[i].setDaysRented(DaysRented);
            // cout << tempcar[i].getModel() << " " <<
            // tempcar[i].getDaysRented()
            //   << endl;
          }
          return (tempcar[i].getPrice() * tempcar[i].getDaysRented());
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
// to return a car
void return_car(vector<Car> &tempcar, int day) {
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
        for (int j = -1; j <= tempcar[i].getDaysRented(); j++) {
          tempcar[i].setAvailability((j + day), true);
        }
        tempcar[i].setDaysRented(0);
        cout << "Your rented car is returned" << std::endl;
        return;
      }
    }
  }
  cout << "Sorry that is not one of our cars." << endl;
}