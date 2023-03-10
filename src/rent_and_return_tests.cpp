#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

class Car {
private:
  // Private class attributes
  std::vector<bool> availability;
  std::string make;
  std::string model;
  int daysRented;
  double price;

public:
  // Constructors
  Car() {}
  Car(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  // Methods to get and set availability
  std::vector<bool> getAvailability() { return this->availability; }
  void setAvailability(int index, bool available) {
    availability.resize(availability.size() + 1);
    this->availability.at(index) = available;
  }
  bool getAvailability(int index) { return this->availability.at(index); }
  // Methods to get and set make
  std::string getMake() { return this->make; }
  void setMake(std::string make) { this->make = make; }
  // Methods to get and set model
  std::string getModel() { return this->model; }
  void setModel(std::string model) { this->model = model; }
  // methods to get and set daysRented
  void setDaysRented(int days) { this->daysRented = days; }
  int getDaysRented() { return this->daysRented; }
  // methods to get and set price
  void setPrice(double price) { this->price = price; }
  double getPrice() { return this->price; }
};

double Rent(string car, int day, vector<Car> tempcar) {
  bool repeat = true;
  day = day - 1;
  while (repeat == true) {

    int DaysRented;
    cout << "How many days are your renting your car" << endl;
    cin >> DaysRented;
    for (int i = 0; i < tempcar.size(); i++) {
      if (car == tempcar[i].getModel()) {
        if ((DaysRented + day) >= 0 && (DaysRented + day) < 7) {
          if (tempcar[i].getAvailability(day) == true) {
            for (int j = 1; j <= DaysRented; j++) {
              tempcar[i].setAvailability(day, false);
              tempcar[i].setDaysRented(DaysRented);
              cout << tempcar[i].getModel() << " " << tempcar[i].getDaysRented()
                   << endl;
            }
            return 100.00; // tempcar[i].getPrice();
          } else {
            cout << "Sorry this car is not avabile please try again" << endl;
            return -1; // Requested car is not avalable
          }
        } else {
          cout << "Sorry you can only rent with in the current week" << endl;
          return -1;
        }
      }
    }
    cout << "Sorry that is not a car we have try again" << endl;
    return -1;
  }
  return -1;
}

void return_car(vector<Car> tempcar) {
  string car;
  string responce;
  cout << "Please enter the model of your returned car" << std::endl;
  cin >> car;
  int temp = 0;
  for (int i = 0; i < tempcar.size(); i++) {
    if (tempcar[i].getModel() == car) {
      cout << "The car you are returning is " << tempcar[i].getMake() << " "
           << tempcar[i].getModel() << " which was rented for "
           << tempcar[i].getDaysRented() << " days" << endl;
      cout << "Please confrim this is the correct car(y/n)";
      cin >> responce;
      if (responce == "y") {
        for (int j = 0; j < tempcar[i].getDaysRented(); j++) {
          tempcar[i].setAvailability(j, true);
        }
        tempcar[i].setDaysRented(0);
        cout << "Your rented car is returned" << std::endl;
      }
    }
    cout << "Sorry that is not one of our cars." << endl;

  }
  
}

Car chevyImpala;
Car fordTaurus;
Car volkswagenPassat;
Car toyotaCorolla;
Car hondaPilot;

int main() {
  string car;
  double test;
  int day;
  // Modify the Class Attributes
  chevyImpala.setMake("Chevy");
  chevyImpala.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    chevyImpala.setAvailability(i, true);
  }
  fordTaurus.setMake("Ford");
  fordTaurus.setModel("Taurus");
  for (int i = 0; i != 7; i++) {
    fordTaurus.setAvailability(i, true);
  }
  volkswagenPassat.setMake("Volkswagen");
  volkswagenPassat.setModel("Passat");
  for (int i = 0; i != 7; i++) {
    volkswagenPassat.setAvailability(i, true);
  }
  toyotaCorolla.setMake("Toyota");
  toyotaCorolla.setModel("Corolla");
  for (int i = 0; i != 7; i++) {
    toyotaCorolla.setAvailability(i, true);
  }
  hondaPilot.setMake("Honda");
  hondaPilot.setModel("Pilot");
  for (int i = 0; i != 7; i++) {
    hondaPilot.setAvailability(i, true);
  }
  vector<Car> CarInstances{chevyImpala, fordTaurus, volkswagenPassat,
                           toyotaCorolla, hondaPilot};
  for (int i = 0; i < 5; i++) {
    cout << CarInstances[i].getModel() << " "
         << CarInstances[i].getAvailability(0) << endl;
  }
  cout << "Enter Cars name " << endl;
  cin >> car;
  cout << "Enter in Day of week Sun-saturday (1-7)" << endl;
  cin >> day;
  test = Rent(car, day, CarInstances);
  cout << fixed;
  cout << setprecision(2) << test << endl;
  return_car(CarInstances);
  return 0;
}