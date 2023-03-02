#include "Functions_library.h"
#include <iostream>
#include <vector>
#include "Car_Class.h"

Car car1;
car1.setmake("POG");

void Rent(std::string car, int day) {
    day-= 1;
  
  

  for (int i = 0; i < tempcar.size(); i++) { // Proof of idea will need to edit
    if (tempcar[i] == true) {
      // std::cout << " This is a a car we don't have sorry"<< std::endl;
      // if car.getAvailability == True{
      //ar::car.setAvailability =  False
      std::cout << "a car is Rented to you" << std::endl;
      //}
    }
  }
}

void printAvailability() {                   // to print avaalbal car to rent
    std::cout << "FIXME2"<< std::endl;
    /*
  for (int i = 0; i < carlist.size(); i++) { // will hopefulyy be code
    std::cout << "the avaiabliy cars are:" << std::endl;
    if (carlist.at(i).getAvailability == true) {
      car::car.printdetails;
    }
  }*/
}
void return_car() {
    std::string car;
    std::cout << "FIXME3"<< std::endl;
    std::cout << "PLease enter the model of your returned car"<< std::endl;
    std::cin >> car;
    /*
    for (int i = 0; i < tempcar.size(); i++) { // Proof of idea will need to edit
    if (tempcar[i].getmake == car) {
        car::car.setAvailability =  True
        std::cout<< "Your rented car is returned"<< std::endl;
    }
    }
    */

}
int main() {
  Rent("honda ploiet");
  printAvailability();
  return_car();
  std::cout << "Test is done" << std::endl;
  return 0;
}