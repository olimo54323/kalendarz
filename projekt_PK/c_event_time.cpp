#include <string>
#include <iostream>

#include "c_event_time.h"

using namespace std;

cTime::cTime(string BEGIN_HOUR, string BEGIN_MINUTE, string END_HOUR, string END_MINUTE)
{
	this->begin_hour = BEGIN_HOUR;
	this->begin_minute = BEGIN_MINUTE;
	this->end_hour = END_HOUR;
	this->end_minute = END_MINUTE;
}

std::string cTime::get_begin_hour() const
{
	return this->begin_hour;
}

std::string  cTime::get_begin_minute() const
{
	return this->begin_minute;
}

std::string  cTime::get_end_hour() const
{
	return this->end_hour;
}

std::string  cTime::get_end_minute() const
{
	return this->end_minute;
}

void cTime::set_begin_hour(string HOUR)
{
	this->begin_hour = HOUR;
}

void cTime::set_begin_minute(string MINUTE)
{
	this->begin_minute = MINUTE;
}

void cTime::set_end_hour(string HOUR)
{
	this->end_hour = HOUR;
}

void cTime::set_end_minute(string MINUTE)
{
	this->end_minute = MINUTE;
}




