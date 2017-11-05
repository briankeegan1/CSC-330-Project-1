#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Contents {
public:
	void setItemName(string);
	void setQuantity(int);

	string getItemName(int);
	int getQuantity(int);
	int getVectSize();
private:
	vector<string> itemName;
	vector<int> quantity;
};