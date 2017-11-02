#pragma once
#include <string>
#include <iostream>
using namespace std;

class Contents {
public:
	void setItemName(string[], int);
	void setQuantity(float *, int);

	string getItemName(int);
	float getQuantity(int);
private:
	string itemName[255];
	float quantity[255];
};