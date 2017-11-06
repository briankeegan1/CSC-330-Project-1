#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date {
public:
	void setDate(int,int,int);

	int getDay();
	int getMonth();
	int getYear();
private:
	int day;
	int month;
	int year;
};