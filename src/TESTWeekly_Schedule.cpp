#include "car_class.h"
#include "menu.h"
#include "weekly_schedule.cpp"
#include <iostream>
#include <vector>
int main() {
  // Create Test vector for carPrint Function Test
  vector<bool> carAvailability{true, true, false, true, true, false, false};
  vector<bool> car2Availability{false, false, false, false,
                                false, false, false};
  vector<bool> car3Availability{true, true, true, true, true, true, true};
  // Test carPrint Function
  cout << "         Output: ";
  carPrint(car2Availability);
  cout << endl
       << "Expected output: x      x      x      x      x      x      x" << endl
       << endl;
  cout << "         Output: ";
  carPrint(car3Availability);
  cout << endl
       << "Expected output: ✔      ✔      ✔      ✔      ✔      ✔      ✔" << endl
       << endl;
  cout << "         Output: ";
  carPrint(carAvailability);
  cout << endl
       << "Expected output: ✔      ✔      x      ✔      ✔      x      x"
       << endl;

  return 0;
}
