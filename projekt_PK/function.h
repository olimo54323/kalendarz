#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>

template <typename T>
T string_convert(const std::string& value)
{
	std::istringstream word(value);
	T temp;
	word >> temp;
	return temp;
}

template<typename T>
void data_change(T& object, const std::string& prompt)
{
	std::cout << prompt << ": ";

	std::string input;
	getline(std::cin, input);

	if (!input.empty())
		object = string_convert<T>(input);
}

int timestamp_make(const int& year, const int& month, const int& day, const std::string& hour, const std::string& minute);

bool hour_verification(const std::string& hour);

bool minute_verification(const std::string& minute);

bool day_verification(const int& day, const int& month);

bool month_verification(const int& month);

bool year_verification(const int& year);

bool time_order_verification(const std::string& begin_hour, const std::string& end_hour);

bool time_order_verification(const std::string& begin_hour, const std::string& begin_minute, const std::string& end_hour, const std::string& end_minute);

#endif // !FUNCTION_H

