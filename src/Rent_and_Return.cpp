//#include "Car_Class.h"
//#include "Functions_library.h"
#include <iostream>
#include <vector>
#include "Car_Class.h"
using namespace std;  //g++ main.cpp menu.cpp Rent_and_Return.cpp WeeklySchedule.cpp -o a.out to run code

// tempcar will be a list of car instancest to run through
double Rent(string car, int day, std::vector<Car> tempcar) {
  int daysrented =0;
  //cout << "How many days are your renting your car" << endl;
  //cin >> daysrented;
    cout << "Rent test 0";
  for (int i = 0; i < tempcar.size(); i++) {
      cout << tempcar[i].getMake();
    if (car == tempcar[i].getModel()) {
        cout << "Rent test 1";
      if (tempcar[i].getAvailability(day) == true) {
          cout << "Rent test 2";
        for (int j = 0; j <= daysrented ; i++) {
            cout << "Rent test 3";
          tempcar[i].setAvailability(day + j, false);
          tempcar[i].setDaysRented(daysrented);
        }
        return 10000.00;
      } else {
        return -1; // Requested car is not avalable
      }
    }
  }
  return -2; // Car is not somthing we have or is missed typed
  return 0;
}

void return_car(std::vector<Car> tempcar) {
  string car;
  cout << "FIXME3" << std::endl;
  cout << "PLease enter the model of your returned car" << std::endl;
  cin >> car;
  int temp = 0;
  for (int i = 0; i < tempcar.size(); i++) {
    if (tempcar[i].getMake() == car) {
      tempcar[i].setAvailability(temp, true);
      cout << "Your rented car is returned" << std::endl;
    }
  }
}
/*
int main() {
  Car car1;
  car1.setMake("Car A");
  car1.setAvailability(0, true);
  Car car2;
  car2.setMake("Car B");
  car2.setAvailability(0, true);
  Car car3;
  car3.setMake("Car C");
  car3.setAvailability(0, true);
  Car car4;
  car4.setMake("Car D");
  car4.setAvailability(0, true);
  Car car5;
  car4.setMake("Car E");
  car4.setAvailability(0, true);
  std::vector<Car> tempcar;
  tempcar.push_back(car1);
  tempcar.push_back(car2);
  tempcar.push_back(car3);
  tempcar.push_back(car4);
  tempcar.push_back(car5);

  cout << Rent("Car D", 1, tempcar) << std::endl;
  return_car(tempcar);
  std::cout << "Test is done" << std::endl;
  return 0;
}*/