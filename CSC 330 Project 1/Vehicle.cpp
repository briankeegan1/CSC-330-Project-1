#include "Vehicle.h"

void Vehicle::setID(string ID)
{
	this->ID = ID;
}

void Vehicle::setFuel(float fuel)
{
	this->fuel = fuel;
}

string Vehicle::getID()
{
	return ID;
}

float Vehicle::getFuel()
{
	return fuel;
}
