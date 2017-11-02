#include "VehicleManager.h"

void VehicleManager::setUsage(string usage)
{
	this->usage = usage;
}

void VehicleManager::setName(string name)
{
	this->name = name;
}

void VehicleManager::setMileage(double mileage)
{
	this->mileage = mileage;
}

void VehicleManager::setID(string ID)
{
	vehicle.setID(ID);
}

void VehicleManager::setFuel(float fuel)
{
	vehicle.setFuel(fuel);
}

void VehicleManager::setItemName(string itemName[], int size)
{
	contents.setItemName(itemName, size);
}

void VehicleManager::setQuantity(float quantity[], int size)
{
	contents.setQuantity(quantity, size);
}

void VehicleManager::setDate(int day, int month, int year)
{
	date.setDate(day, month, year);
}

string VehicleManager::getUsage()
{
	return usage;
}

string VehicleManager::getName()
{
	return name;
}

double VehicleManager::getMileage()
{
	return mileage;
}

string VehicleManager::getID()
{
	return vehicle.getID();
}

float VehicleManager::getFuel()
{
	return vehicle.getFuel();
}

string VehicleManager::getItemName(int index)
{
	return contents.getItemName(index);
}

float VehicleManager::getQuantity(int index)
{
	return contents.getQuantity(index);
}

Date VehicleManager::getDate()
{
	return date;
}

void VehicleManager::getDateAll(int &day, int &month, int &year)
{
	day = date.getDay();
	month = date.getMonth();
	year = date.getYear();
}
