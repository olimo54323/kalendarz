#ifndef CSV_GENERATOR_H

#define CSV_GENERATOR_H

#include <iostream>
#include <string>

#include "c_formal_event.h"
#include "c_private_event.h"
#include "c_business_event.h"

class cCSV_generator
{
private:
	std::string line;
public:
	cCSV_generator() {};
	~cCSV_generator() {};

	void generate_CSV(cFormal_event& f_obj)
	{
		this->line = f_obj.get_event_name() + ";"
			+ std::to_string(f_obj.get_event_day()) + ";"
			+ std::to_string(f_obj.get_event_month()) + ";"
			+ std::to_string(f_obj.get_event_year()) + ";"
			+ f_obj.get_event_begin_hour() + ";"
			+ f_obj.get_event_begin_minute() + ";"
			+ f_obj.get_event_end_hour() + ";"
			+ f_obj.get_event_end_minute() + ";;"
			+ f_obj.get_event_departament() + ";"
			+ f_obj.get_event_queue_number() + ";;";
	}
	void generate_CSV(cPrivate_event& p_obj)
	{
		this->line = p_obj.get_event_name() + ";"
			+ std::to_string(p_obj.get_event_day()) + ";"
			+ std::to_string(p_obj.get_event_month()) + ";"
			+ std::to_string(p_obj.get_event_year()) + ";"
			+ p_obj.get_event_begin_hour() + ";"
			+ p_obj.get_event_begin_minute() + ";"
			+ p_obj.get_event_end_hour() + ";"
			+ p_obj.get_event_end_minute() + ";;;;"
			+ p_obj.get_event_gift() + ";"
			+ std::to_string(p_obj.get_event_cost());
	}
	void generate_CSV(cBusiness_event& b_obj)
	{
		this->line = b_obj.get_event_name() + ";"
			+ std::to_string(b_obj.get_event_day()) + ";"
			+ std::to_string(b_obj.get_event_month()) + ";"
			+ std::to_string(b_obj.get_event_year()) + ";"
			+ b_obj.get_event_begin_hour() + ";"
			+ b_obj.get_event_begin_minute() + ";"
			+ b_obj.get_event_end_hour() + ";"
			+ b_obj.get_event_end_minute() + ";"
			+ b_obj.get_event_phone_number() + ";;;;";
	}
};
#endif // !CSV_GENERATOR_H

