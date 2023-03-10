#pragma once
#include <iostream>
#include <vector>
#include <cstring>
#include "car_class.h"

double Rent(string car, int day, std::vector<Car>& tempcar);
void return_car(std::vector<Car>& tempcar, int day);