#ifndef MVC_H

#define MVC_H

#include <list>
#include "c_formal_event.h"
#include "c_private_event.h"
#include "c_business_event.h"

class cEvent_controler
{
public:
	void event_map_add(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map);
	
};

class cEvent_model
{
public:
	void event_map_modify(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map);
};

class cEvent_view
{
public:
	void event_map_show(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map);
	void menu(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map, cEvent_controler& EC_obj, cEvent_model& EM_obj);
};

#endif // !MVC_H
