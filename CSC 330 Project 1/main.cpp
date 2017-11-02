#include <iostream>
#include <fstream>
#include "VehicleManager.h"
using namespace std;

int main() {
	VehicleManager vehicle;
	ofstream outputLog;
	string ID;
	int day, month, year;
	string name;
	float mileage;
	string usage;
	int numContent;
	string content[255];
	float quantity[255];
	
	outputLog.open("Logs.txt");
	//Input
	cout << "Input Record ID number: ";
	cin >> ID;
	vehicle.setID(ID);

	cout << "\nInput day, month, year checked out: ";
	cin >> day >> month >> year;
	vehicle.setDate(day, month, year);

	cout << "\nInput driver name: ";
	cin >> name;//getline
	vehicle.setName(name);

	cout << "\nInput mileage: ";
	cin >> mileage;
	vehicle.setMileage(mileage);

	cout << "\nInput usage: ";
	cin >> usage;
	vehicle.setUsage(usage);

	cout << "\nInput number of different content: ";
	cin >> numContent;
	cout << "\nEnter name of content, followed by quantity: ";
	for (int i = 0; i < numContent; i++)
	{
		cin >> content[i];
		cin >> quantity[i];
	}
	vehicle.setItemName(content, numContent);
	vehicle.setQuantity(quantity, numContent);

	//Output
	outputLog << "Vehicle ID: " << vehicle.getID() << endl;
	vehicle.getDateAll(day, month, year);
	outputLog << "Date: " << day << '/' << month << '/' << year << endl;
	outputLog << "Driver: " << vehicle.getName() << endl;
	outputLog << "Trip Mileage: " << vehicle.getMileage() << endl;
	outputLog << "Vehicle Usage: " << vehicle.getUsage() << endl;
	outputLog << "Contents\n";
	for (int i = 0; i < numContent; i++)
	{
		outputLog << vehicle.getItemName(i) << "\tx" << vehicle.getQuantity(i) << endl;
	}
	outputLog.close();
	system("pause");
	return 0;
}