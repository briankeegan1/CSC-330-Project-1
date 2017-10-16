#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle {
public:
	void setID();
	void setFuel();

	string getID();
	float getFuel();
private:
	string ID;
	float fuel;
};