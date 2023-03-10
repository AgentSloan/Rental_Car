/**
 * Project III: Start here.
 */
//#include "Functions_library.h"
#include <iostream>
#include <ostream>
#include <vector>
#include "menu.h"
#include "rent_and_return.h"
#include "weekly_schedule.h"
using namespace std;

// Create Rental car objects

Car chevyImpala;
  Car fordTaurus;
  Car volkswagenPassat;
  Car toyotaCorolla;
  Car hondaPilot;

// Set vehicle Characteristics
int main() {
  // Modify the Class Attributes
  chevyImpala.setMake("Chevy");
  chevyImpala.setModel("Impala");
  chevyImpala.setPrice(60);
  for (int i = 0; i != 7; i++) {
    chevyImpala.setAvailability(i, true);
  }
  fordTaurus.setMake("Ford");
  fordTaurus.setModel("Taurus");
  fordTaurus.setPrice(52);
  for (int i = 0; i != 7; i++) {
    fordTaurus.setAvailability(i, true);
  }
  volkswagenPassat.setMake("Volkswagen");
  volkswagenPassat.setModel("Passat");
  volkswagenPassat.setPrice(41);
  for (int i = 0; i != 7; i++) {
    volkswagenPassat.setAvailability(i, true);
  }
  toyotaCorolla.setMake("Toyota");
  toyotaCorolla.setModel("Corolla");
  toyotaCorolla.setPrice(29);
  for (int i = 0; i != 7; i++) {
    toyotaCorolla.setAvailability(i, true);
  }
  hondaPilot.setMake("Honda");
  hondaPilot.setModel("Pilot");
  hondaPilot.setPrice(60);
  for (int i = 0; i != 7; i++) {
    hondaPilot.setAvailability(i, true);
  }
  vector<Car> CarInstances{chevyImpala, fordTaurus, volkswagenPassat,
                           toyotaCorolla, hondaPilot};// Useing to debug Kolby
  for (int i = 0; i != 5; i++) {
    cout <<CarInstances[i].getMake() <<" "<< CarInstances[i].getAvailability(0)<< endl;
  }
  menu(CarInstances);
  return 0;
}