/* File Name: Car_Class_Method_Tests.cpp
   Description: Tests for the member functions found in Car_Class.cppclass
   Author: Josh Bielas
   Date: 2/28/2023
*/

#include "Car_Class.h"
#include <iostream>
#include <string> 
#include <assert.h>

// Not Complete
int main(){
// Creates instance of Car
Car myCar(0, true);
std::cout << "Availability Testing Beginning" << std::endl;
// Tests availability methods
assert(myCar.getAvailability().at(0) == true);
// Changes availability
myCar.setAvailability(0, false);
// Tests availability again
assert(myCar.getAvailability().at(0) == false);
// Change availability at index 1
myCar.setAvailability(1, true);
// Tests availability at index 1
assert(myCar.getAvailability().at(1) == true);
std::cout << "Availability Testing Finished" << std::endl << std::endl;

// Creates new instance of Car
Car mySecondCar;
// Tests make methods
std::cout << "Make Testing Beginning" << std::endl;
mySecondCar.setMake("Honda");
std::cout << mySecondCar.getMake() << std::endl;
std::cout << "Make Testing Finished" << std::endl << std::endl;

// Creates new instance of Car
Car myThirdCar;
// Tests model methods
std::cout << "Model Testing Beginning" << std::endl;
myThirdCar.setModel("Pilot");
std::cout << myThirdCar.getModel() << std::endl;
std::cout << "Model Testing Finished" << std::endl << std::endl;

// Creates new instance of Car
Car myFourthCar;
// Tests days rented methods
std::cout << "Days Rented Testing Beginning" << std::endl;
myFourthCar.setDaysRented(3);
std::cout << myFourthCar.getDaysRented() << std::endl;
std::cout << "Days Rented Testing Finished" << std::endl << std::endl;

// Creates new instance of Car
Car myFifthCar;
// Tests price methods
std::cout << "Price Testing Beginning" << std::endl;
myFifthCar.setPrice(1000);
std::cout << myFifthCar.getPrice() << std::endl;
std::cout << "Price Testing Finished" << std::endl << std::endl;

std::cout << "All Testing Successfuly Completed!" << std::endl;

return 0;
}