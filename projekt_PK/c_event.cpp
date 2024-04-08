#include <string>
#include <iostream>

#include "c_event.h"

using namespace std;

cEvent::cEvent(string NAME, 
							int DAY, 
							int MONTH, 
							int YEAR, 
							string BEGIN_HOUR, 
							string BEGIN_MINUTE, 
							string END_HOUR, 
							string END_MINUTE, 
							string DESCRIPTION)
{
	this->name = NAME;
	this->date.day = DAY;
	this->date.month = MONTH;
	this->date.year = YEAR;
	this->time.begin_hour = BEGIN_HOUR;
	this->time.begin_minute = BEGIN_MINUTE;
	this->time.end_hour = END_HOUR;
	this->time.end_minute = END_MINUTE;
	this->description = DESCRIPTION;
}





