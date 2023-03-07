#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Car {
private:
  // Private class attributes
  std::vector<bool> availability;
  std::string make;
  std::string model;
  int daysRented = 0;
  double price;

public:
  // Constructors and public class methods to set and get the private class attributes
  Car() {}
  Car(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  std::vector<bool> getAvailability() { return this->availability; }
  void setAvailability(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  bool getAvailability(int index) { return this->availability.at(index); }
  std::string getMake() { return this->make; }
  void setMake(std::string make) { this->make = make; }
  std::string getModel() { return this->model; }
  void setModel(std::string model) { this->model = model; }
  void setDaysRented(int days){
      this->daysRented = days;
  }
  int getDaysRented(){ return this->daysRented; }
  void setPrice(double price){
      this->price = price;
  }
  double getPrice(){ return this->price; }
};