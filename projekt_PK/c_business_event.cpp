#include <string>
#include <iostream>
#include <list>

#include "c_business_event.h"

using namespace std;

cBusiness_event::cBusiness_event(string NAME,
															int DAY,
															int MONTH,
															int YEAR,
															string BEGIN_HOUR,
															string BEGIN_MINUTE,
															string END_HOUR,
															string END_MINUTE,
															string DESCRIPTION,
															string PHONE_NUMBER)
{
	this->phone_number = PHONE_NUMBER;
}

void cBusiness_event::event_update()
{
	std::string time_temp = "";
	int date_temp = 0;

	data_change<std::string>(this->name, "name");

	date_temp = this->date.get_year();
	do
	{
		data_change<int>(date_temp, "year");
	} while (!year_verification(date_temp));
	this->date.set_year(date_temp);

	date_temp = this->date.get_month();
	do
	{
		data_change<int>(date_temp, "month");
	} while (!month_verification(date_temp));
	this->date.set_month(date_temp);

	date_temp = this->date.get_day();
	do
	{
		data_change<int>(date_temp, "day");
	} while (!day_verification(date_temp, this->date.get_month()));
	this->date.set_day(date_temp);

	time_temp = this->time.get_begin_hour();
	do
	{
		data_change<std::string>(time_temp, "begin hour");
	} while (!hour_verification(time_temp));
	this->time.set_begin_hour(time_temp);

	time_temp = this->time.get_begin_minute();
	do
	{
		data_change<std::string>(time_temp, "begin minute");
	} while (!minute_verification(time_temp));
	this->time.set_begin_minute(time_temp);

	time_temp = this->time.get_end_hour();
	do
	{
		data_change<std::string>(time_temp, "end hour");
	} while (!hour_verification(time_temp) or !time_order_verification(this->time.get_begin_hour(), time_temp));
	this->time.set_end_hour(time_temp);

	time_temp = this->time.get_end_minute();
	do
	{
		data_change<std::string>(time_temp, "end minute");
	} while (!minute_verification(time_temp) or !time_order_verification(this->time.get_begin_hour(), this->time.get_begin_minute(), this->time.get_end_hour(), time_temp));
	this->time.set_end_minute(time_temp);

	data_change<std::string>(this->description, "description");
	data_change<std::string>(this->phone_number, "phone number");
}

void cBusiness_event::event_show()
{
	cout << "private event" << endl << endl;
	cout << this->name << endl;
	cout << this->date.get_day() << "-" << this->date.get_month() << "-" << this->date.get_year() << endl;
	cout << this->time.get_begin_hour() << ":" << this->time.get_begin_minute();
	cout << "-" << this->time.get_end_hour() << ":" << this->time.get_end_minute() << endl;
	cout << this->description << endl;
	cout << this->phone_number << endl;
	cout << "------------------------------" << endl;
}

std::string cBusiness_event::get_event_name() const
{
    return this->name;
}
int cBusiness_event::get_event_year() const
{
    return this->date.get_year();
}
int cBusiness_event::get_event_month() const
{
    return this->date.get_month();
}
int cBusiness_event::get_event_day() const
{
    return this->date.get_day();
}
std::string cBusiness_event::get_event_begin_hour() const
{
    return this->time.get_begin_hour();
}
std::string cBusiness_event::get_event_begin_minute() const
{
    return this->time.get_begin_minute();
}

std::string cBusiness_event::get_event_end_hour() const
{
    return  this->time.get_end_hour();
}
std::string cBusiness_event::get_event_end_minute() const
{
    return  this->time.get_end_minute();
}

std::string  cBusiness_event::get_event_description() const
{
    return this->description;
}

std::string cBusiness_event::get_event_phone_number() const
{
    return this->phone_number;
}

void cBusiness_event::add_event_to_list(std::list<cBusiness_event>& list)
{
	if (list.empty())
	{
		list.push_back(*this);
		return;
	}

	for (auto it = list.begin(); it != list.end(); it++)
	{
		if (*this < *it)
		{
			list.insert(it, *this);
			return;
		}
	}
}