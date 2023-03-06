/* File Name: Car_Class_Method_Tests.cpp
   Description: Tests for the member functions found in Car_Class.cppclass
   Author: Josh Bielas
   Date: 2/28/2023
*/

#include "Functions_library.h"
#include <iostream>
#include <string> 
#include <assert.h>

// Not Complete
int main(){
Car myCar(0, true);
std::cout << "Testing Beginning" << std::endl;
assert(myCar.getAvailability().at(0) == true);
myCar.setAvailability(0, false);
assert(myCar.getAvailability().at(0) == false);
std::cout << "Testing Finished" << std::endl;

return 0;
}