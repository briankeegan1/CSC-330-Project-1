#include "Date.h"

void Date::setDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
	//modify to check to make sure it is a valid date
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}
