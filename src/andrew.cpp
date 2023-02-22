#include "library.h"
#include <chrono>
#include <iomanip>
#include <iostream>
#include <thread>
using namespace std;

void loading() {
  char a = ' ';
  for (int i = 100, j = 0; i >= 0; i--) {
    cout << endl << endl << endl << endl << endl << endl;
    cout << endl << endl << endl << endl << endl << endl;
    cout << setw(i) << "     _____      " << endl
         << setw(i) << " ___/__|__|____ " << endl
         << setw(i) << "{______________}" << endl
         << setw(i) << " <>         <>  " << endl;
    cout << "Loading... " << j << "% complete " << endl;
    j++;
    this_thread::sleep_for(chrono::milliseconds(40));
  }
  cout << endl;
  cout << "Your car is ready for pick up" << endl;
}

// test call, can be deleted when implemented to main
int main() {
  loading();
  return 0;
}