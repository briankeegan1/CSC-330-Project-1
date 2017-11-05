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
	void setID(string);
	void setFuel(float);
	void setItemName(string);
	void setQuantity(int);
	void setDate(int, int, int);

	
	string getUsage();
	string getName();
	double getMileage();
	string getID();
	float getFuel();
	string getItemName(int);
	int getQuantity(int);
	Date getDate();
	void getDateAll(int&, int&, int&);
	int getVectSize();
	void emptyVectors();
private:
	string usage;
	string name;
	double mileage;

	Contents contents;
	Date date;
	Vehicle vehicle;
};