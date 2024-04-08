#include <string>
#include <iostream>

#include "c_event_date.h"

using namespace std;

cDate::cDate(int DAY, int MONTH, int YEAR)
{
	this->day = DAY;
	this->month = MONTH;
	this->year = YEAR;
}

int cDate::get_day() const
{
	return this->day;
}
int cDate::get_month() const
{
	return this->month;
}
int cDate::get_year() const
{
	return this->year;
}

void cDate::set_day(int DAY)
{
	this->day = DAY;
}
void cDate::set_month(int MONTH)
{
	this->month = MONTH;
}
void cDate::set_year(int YEAR)
{
	this->year = YEAR;
}