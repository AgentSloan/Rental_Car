/**
 * Project III: Start here.
 */
#include "Functions_library.h"
#include <iostream>

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
  return 0;
}