#pragma once
#include <string>
#include <iostream>
using namespace std;

class Contents {
public:
	void setItemName(string);
	void setQuantity(string);

	string getItemName();
	float getQuantity();
private:
	string itemName;
	float quantity;
};