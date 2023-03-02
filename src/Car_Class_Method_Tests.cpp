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
Car myCar(true);
std::cout << "Testing Beginning" << std::endl;
assert(myCar.getAvailability() == true);
myCar.setAvailability(false);
assert(myCar.getAvailability() == false);
std::cout << "Testing Finished" << std::endl;

return 0;
}