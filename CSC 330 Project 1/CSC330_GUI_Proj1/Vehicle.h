#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle {
public:
	void setID(string);
	void setFuel(float);

	string getID();
	float getFuel();
private:
	string ID;
	float fuel;
};