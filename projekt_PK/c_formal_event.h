#ifndef FORMAL_EVENT_H
#define FORMAL_EVENT_H

#include <string>

#include "c_event.h"
#include "function.h"


class cFormal_event : public cEvent
{
private:
	std::string departament;
	std::string queue_number;
public:
	cFormal_event(std::string NAME = "N/A", 
								int DAY = 1, 
								int MONTH = 1, 
								int YEAR = 2023, 
								std::string BEGIN_HOUR = "00", 
								std::string BEGIN_MINUTE = "00", 
								std::string END_HOUR = "00", 
								std::string END_MINUTE = "00", 
								std::string DESCRIPTION = "N/A", 
								std::string DEPARTAMENT = "N/A",
								std::string QUEUE_NUMBER = "N/A");

	~cFormal_event() = default;

	void event_update();
	void event_show();
	void add_event_to_list(std::list<cFormal_event>& list);

    std::string get_event_name() const override;
	int get_event_year() const override;
	int get_event_month() const override;
	int get_event_day() const override;
	std::string get_event_begin_hour() const override;
	std::string get_event_begin_minute() const override;
    std::string get_event_end_hour() const override;
    std::string get_event_end_minute() const override;
    std::string  get_event_description() const override;

    std::string get_event_departament() const;
    std::string get_event_queue_number() const;
 
	

	bool operator > (const cFormal_event& rhs)
	{
		//porównanie sprawdza rok; gdy lata s¹ zgodne, sprawdza miesi¹ce, itd. 
		return (timestamp_make(this->get_event_year(), this->get_event_month(), this->get_event_day(),
			this->get_event_begin_hour(), this->get_event_begin_minute()) >
			timestamp_make(rhs.get_event_year(), rhs.get_event_month(), rhs.get_event_day(),
				rhs.get_event_begin_hour(), rhs.get_event_begin_minute()));
	}

	bool operator < (const cFormal_event& rhs)
	{
		//porównanie sprawdza rok; gdy lata s¹ zgodne, sprawdza miesi¹ce, itd.
		return (timestamp_make(this->get_event_year(), this->get_event_month(), this->get_event_day(),
			this->get_event_begin_hour(), this->get_event_begin_minute()) <
			timestamp_make(rhs.get_event_year(), rhs.get_event_month(), rhs.get_event_day(),
				rhs.get_event_begin_hour(), rhs.get_event_begin_minute()));
	}
};

#endif //!FORMAL_EVENT_H