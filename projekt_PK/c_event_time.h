#ifndef EVENT_TIME_H
#define EVENT_TIME_H

#include <string>

#include "function.h"
class cTime
{
	friend class cEvent;

protected:
	std::string begin_hour;
	std::string begin_minute;
	std::string end_hour;
	std::string end_minute;
public:
	cTime(std::string BEGIN_HOUR = "00", 
				std::string BEGIN_MINUTE = "00", 
				std::string END_HOUR = "00", 
				std::string END_MINUTE = "00" );
	~cTime() = default;

	std::string  get_begin_hour() const;
	std::string  get_begin_minute() const;
	std::string  get_end_hour() const;
	std::string  get_end_minute() const;

	void set_begin_hour(std::string HOUR);
	void set_begin_minute(std::string MINUTE);
	void set_end_hour(std::string HOUR);
	void set_end_minute(std::string MINUTE);

};
#endif // !EVENT_DATE_H

