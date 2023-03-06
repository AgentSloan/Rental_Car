#include "Car_Class.h"
#include "Functions_library.h"
#include <iostream>
using namespace std;

// Create Rental car objects
Car chevyImpala;

Car fordTaurus;

Car volkswagenPassat;

Car toyotaCarola;

Car toyotaRav4;

// Set vehicle Characteristics
int main() {
  // Modify the Class Attributes
  chevyImpala.setMake("Chevy");
  chevyImpala.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    chevyImpala.setAvailability(i, true);
  }
  fordTaurus.setMake("Chevy");
  fordTaurus.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    fordTaurus.setAvailability(i, true);
  }
  volkswagenPassat.setMake("Chevy");
  volkswagenPassat.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    volkswagenPassat.setAvailability(i, true);
  }
  toyotaCarola.setMake("Chevy");
  toyotaCarola.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    toyotaCarola.setAvailability(i, true);
  }
  toyotaRav4.setMake("Chevy");
  toyotaRav4.setModel("Impala");
  for (int i = 0; i != 7; i++) {
    toyotaRav4.setAvailability(i, true);
  }
  return 0;
}