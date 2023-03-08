//#include "Car_Class.h"
//#include "Functions_library.h"
#include <iostream>
#include <vector>
#include "Car_Class.h"
using namespace std;  //g++ main.cpp menu.cpp Rent_and_Return.cpp WeeklySchedule.cpp -o a.out to run code

// tempcar will be a list of car instancest to run through
double Rent(string car, int day, vector<Car> tempcar) {
  int daysrented = 0;
  cout << "How many days are your renting your car" << endl;
  cin >> daysrented;
  cout << "Rent test " << endl;
  for (int i = 0; i < tempcar.size(); i++) {
    cout << "Rent test 0" << endl;
    cout << tempcar[i].getModel() << endl;
    if (car == tempcar[i].getModel()) {
      cout << "Rent test 1" << endl;
      if (day >= 0 && day < 7) {
          cout<< "Rent Test 1.5";
        if (tempcar[i].getAvailability(day) == true) {
          cout << "Rent test 2"<<endl;
          for (int j = 1; j <= daysrented; j++) {
            cout << "Rent test 3"<<endl;
            tempcar[i].setAvailability(day, false);
            tempcar[i].setDaysRented(daysrented);
            cout << tempcar[i].getDaysRented();
          }
          return 100.00;
        } else {
          return -1; // Requested car is not avalable
        }
      } else {
        cout << "Sorry that is out side of the week" << endl;
        return 0;
      }
    }
  }
  return -2; // Car is not somthing we have or is missed typed
}

void return_car(vector<Car> tempcar) {
  string car;
  cout << "FIXME3" << endl;
  cout << "PLease enter the model of your returned car" << std::endl;
  cin >> car;
  int temp = 0;
  for (int i = 0; i < tempcar.size(); i++) {
    if (tempcar[i].getModel() == car) {
        for (int j = 0; j < tempcar[i].getDaysRented(); j++) {
            tempcar[i].setAvailability(j, true);
        }
      cout << "Your rented car is returned" << std::endl;
      cout << tempcar[i].getDaysRented() << endl;
      for (int h = 0; h < 7; h++) {
      cout << tempcar[i].getAvailability(h) << endl;
      }
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