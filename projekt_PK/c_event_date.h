#ifndef EVENT_DATE_H
#define EVENT_DATE_H

#include <string>

#include "function.h"

class cDate
{
	friend class cEvent;
protected:
	int day;
	int month;
	int year;

public:
	cDate(int DAY = 1, int MONTH = 1, int YEAR = 2023);
	~cDate() = default;

	int get_day() const;
	int get_month() const;
	int get_year() const;

	void set_day(int DAY);
	void set_month(int MONTH);
	void set_year(int YEAR);
};
#endif // !EVENT_DATE_H
