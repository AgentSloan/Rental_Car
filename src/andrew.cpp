#include "library.h"
#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>
using namespace std;

void loading() {
  char a = ' ';
  for (int i = 120; i > 0; i--) {

    cout << setw(i) << "     _____      " << endl
         << setw(i) << " ___/__|__|____ " << endl
         << setw(i) << "{______________}" << endl
         << setw(i) << " <>         <>  " << endl;
    this_thread::sleep_for(chrono::milliseconds(30));
  }
  cout << "Your car is ready for pick up" << endl;
}

// test call, can be deleted when implemented to main
int main() {
  loading();
  return 0;
}