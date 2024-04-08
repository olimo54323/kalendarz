#include <string>
#include <iostream>
#include <conio.h>

#include "c_private_event.h"
#include "function.h"

using namespace std;

cPrivate_event::cPrivate_event(string NAME, int DAY, int MONTH, int YEAR, string BEGIN_HOUR, string BEGIN_MINUTE, string END_HOUR, string END_MINUTE, string DESCRIPTION, string GIFT, float COST) 
													: cEvent(NAME, DAY, MONTH, YEAR, BEGIN_HOUR, BEGIN_MINUTE, END_HOUR, END_MINUTE, DESCRIPTION)
{
	this->gift = GIFT;
	this->cost = COST;
}

void cPrivate_event::event_update()
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
	data_change<std::string>(this->gift, "gift");
	data_change<float>(this->cost, "cost");
}

void cPrivate_event::event_show()
{
	cout << "private event" << endl << endl;
	cout << this->name << endl;
	cout << this->date.get_day() << "-" << this->date.get_month() << "-" << this->date.get_year() << endl;
	cout << this->time.get_begin_hour() << ":" << this->time.get_begin_minute();
	cout << "-" << this->time.get_end_hour() << ":" << this->time.get_end_minute() << endl;
	cout << this->description << endl;
	cout << this->gift << endl;
	cout << this->cost << endl;
	cout << "------------------------------" << endl;
}

std::string cPrivate_event::get_event_name() const
{
    return this->name;
}
int cPrivate_event::get_event_year() const
{
    return this->date.get_year();
}
int cPrivate_event::get_event_month() const
{
    return this->date.get_month();
}
int cPrivate_event::get_event_day() const
{
    return this->date.get_day();
}
std::string cPrivate_event::get_event_begin_hour() const
{
    return this->time.get_begin_hour();
}
std::string cPrivate_event::get_event_begin_minute() const
{
    return this->time.get_begin_minute();
}

std::string cPrivate_event::get_event_end_hour() const
{
    return  this->time.get_end_hour();
}

std::string cPrivate_event::get_event_end_minute() const
{
    return  this->time.get_end_minute();
}

std::string  cPrivate_event::get_event_description() const
{
    return this->description;
}

std::string cPrivate_event::get_event_gift() const
{
    return this->gift;
}

float cPrivate_event::get_event_cost() const
{
    return this->cost;
}

void cPrivate_event::add_event_to_list(std::list<cPrivate_event>& list)
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