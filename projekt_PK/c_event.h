#ifndef EVENT_H
#define EVENT_H

#include <string>

#include "c_event_date.h"
#include "c_event_time.h"

class cEvent
{
protected:
	std::string name;
	std::string description;
	cDate date;
	cTime time;
	
public:
	cEvent(std::string NAME = "N/A",
				int DAY = 1, 
				int MONTH = 1, 
				int YEAR = 2023, 
				std::string BEGIN_HOUR = "00", 
				std::string BEGIN_MINUTE = "00", 
				std::string END_HOUR = "00", 
				std::string END_MINUTE = "00", 
				std::string DESCRIPTION = "N/A");

	~cEvent() = default;

	virtual void event_update() = 0;		//modyfikacja wydarzenia
	virtual void event_show() = 0;		//wyswietlenie wydarzenia

    virtual std::string get_event_name() const = 0;
	virtual int get_event_year() const = 0;
	virtual int get_event_month() const = 0;
	virtual int get_event_day() const = 0;
	virtual std::string get_event_begin_hour() const = 0;
	virtual std::string get_event_begin_minute() const = 0;
    virtual std::string get_event_end_hour() const = 0;
    virtual std::string get_event_end_minute() const = 0;
    virtual std::string  get_event_description() const = 0;
};
#endif // !EVENT_H

