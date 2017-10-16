#pragma once
#include "Vehicle.h"
#include "Contents.h"
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

class VehicleManager {
public:
	void setUsage(string);
	void setName(string);
	void setMileage(double);

	string getUsage();
	string getName();
	double getMileage();
private:
	string usage;
	string name;
	double mileage;

	Contents contents;
	Date date;
	Vehicle vehicle;
};