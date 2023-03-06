/**
 * Project III: Start here.
 */
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;


//Car Class
class Car {
private:
  // Private class attributes
  std::vector<bool> availability;
  std::string make;
  std::string model;

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
};


string helloWorld();
void loading();
void re_loading();
void pringWeeklySchedule();
<<<<<<< HEAD
void menu(vector<Car>);
=======
void menu();
double Rent(string car, int day);
void return_car();
>>>>>>> 8d49ed36907b099cadd04577eb87d87cabc26620
