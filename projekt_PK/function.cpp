#include "function.h"

int timestamp_make(const int& year, const int& month, const int& day, const std::string& hour, const std::string& minute)
{
	return (std::stoi(minute) + std::stoi(hour) * 60 + day * 1440 + month * 44640 + (year - 2023) * 527040); //aproksymacja daty
}

bool hour_verification(const std::string& hour)
{
	int val = stoi(hour);

	return (val >= 0 and val <= 23) ? true : false;
}

bool minute_verification(const std::string& minute)
{
	int val = stoi(minute);

	return (val >= 0 and val <= 59) ? true : false;
}

bool day_verification(const int& day, const int& month)
{
	int year_array[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return (day > 0 and day <= year_array[month - 1]) ? true : false;
}

bool month_verification(const int& month)
{
	return (month >= 1 and month <= 12) ? true : false;
}

bool year_verification(const int& year)
{
	return (year >= 2023) ? true : false;
}

bool time_order_verification(const std::string& begin_hour, const std::string& end_hour)
{
	return (stoi(begin_hour) <= stoi(end_hour)) ? true : false;
}

bool time_order_verification(const std::string& begin_hour, const std::string& begin_minute, const std::string& end_hour, const std::string& end_minute)
{
	if (stoi(begin_hour) == stoi(end_hour))
	{
		if (stoi(begin_minute) >= stoi(end_minute))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
		return true;
}


