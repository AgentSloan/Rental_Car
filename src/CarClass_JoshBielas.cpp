/*File: CarClass_JoshBielas.cpp
  Description: Contains the car class. Intended for use with Rental Car Project
  Author: Josh Bielas
  Date: 2/27/2023
  */

#include <iostream>
#include <string>
#include <vector>

// Class will be here
class Car {
private:
  // Private class attributes
  bool availability;
  std::string make;
  std::string model;

public:
  // Public class methods to set and get the private class attributes
  bool getAvailability() {
    return this->availability;
  } // Needs to be a vector attribute and the vector type must be a bool#############
  void setAvailability(bool available) { this->availability = available; }
  std::string getMake() { return this->make; }
  void setMake(std::string make) { this->make = make; }
  std::string getModel() { return this->model; }
  void setModel(std::string model) { this->model = model; }
};