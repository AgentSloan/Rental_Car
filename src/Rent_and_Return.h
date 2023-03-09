#pragma once
#include <iostream>
#include <vector>
#include <cstring>
#include "Car_Class.h"

double Rent(string car, int day, std::vector<Car>& tempcar);
void return_car(std::vector<Car>& tempcar);