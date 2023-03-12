#include "rent_and_return.h"
#include <iostream>
#include <ostream>
#include <vector>
using namespace std; // g++ main.cpp menu.cpp rent_and_return.cpp weekly_schedule.cpp -o a.out 

// Funcaiton to Rent a car for starting data till friday
double Rent(string car, int day, vector<Car> &tempcar) {
  bool repeat = true;
  int DaysRented;
  //cout << day;
  day = day - 1;
  if (day > 6) {
    cout << "Sorry we do not rent out Saturday as we are not open."<< endl;
    return -1;
  } else if (day < 0) {
    cout << "Sorry pleace Enter a number (1-6)";
    return -1;
  }
    
  cout << "How many days are your renting your car?" << endl;
  cin >> DaysRented;
  for (int i = 0; i < tempcar.size(); i++) {
    if (car == tempcar[i].getModel()) {
      if ((DaysRented + day) >= 0 && (DaysRented + day) < 7) {
        if (tempcar[i].getAvailability(day) == true) {
          for (int j = 0; j < DaysRented; j++) {
            tempcar[i].setFirstDayRented(day);
            tempcar[i].setAvailability((day + j), false);
            tempcar[i].setDaysRented(DaysRented);
          }
          return (tempcar[i].getPrice() * tempcar[i].getDaysRented());
        } else {
          cout << "Sorry this car is not avabile please try again" << endl;
          return -1; // Requested car is not avalable
        }
      } else {
        cout << "Sorry you can only rent within the current week" << endl;
        return -1; // Error in user rent to far out
      }
    }
  }
  cout << "Sorry that is not a car we have. Please try again" << endl;
  return -1; // Error if user enters in a missed spell and not a car we have
}
// Funcaiton to return a car
void return_car(vector<Car> &tempcar) {
  string car;
  string responce;
  cout << "Please enter the model of your returned car" << std::endl;
  cin >> car;
  int temp = 0;
  for (int i = 0; i < tempcar.size(); i++) {
    if (tempcar[i].getModel() == car) { // Checks and comferming the right car
      cout << "The car you are returning is " << tempcar[i].getMake() << " "
           << tempcar[i].getModel() << " which was rented for "
           << tempcar[i].getDaysRented() << " days" << endl;
      cout << "Please confirm this is the correct car(y/n)";
      cin >> responce;
      if (responce == "y") { // code to reset need values
        for (int j = -1; j <= tempcar[i].getDaysRented(); j++) {
          tempcar[i].setAvailability((j + tempcar[i].getFirstDayRented()),
                                     true);
        }
        tempcar[i].setDaysRented(0);
        tempcar[i].setFirstDayRented(0);
        cout << "Your rented car is returned" << std::endl;
        return; // no errors
      }
    }
  }
  cout << "Sorry that is not one of our cars."
       << endl; // Error if they missed typed or not some thing we have
       return;
}