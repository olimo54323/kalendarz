#include <conio.h>
#include <iostream>

#include "c_mvc.h"


void cEvent_controler::event_map_add(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map)
{
	system("cls");
	char ans;
	std::cout << "choose 1 of those type of event:\n1 - formal event\n2 - private event\n3 - business event" << std::endl;
	ans = _getch();
	system("cls");
	if (ans == '1')
	{
		cFormal_event f_obj;
		std::cout << "Formal event" << std::endl;
		f_obj.event_update();
		f_obj.add_event_to_list(formal_map);
	}
	else if (ans == '2')
	{
		cPrivate_event p_obj;
		std::cout << "Private event" << std::endl;
		p_obj.event_update();
		p_obj.add_event_to_list(private_map);
	}
	else if (ans == '3')
	{
		cBusiness_event b_obj;
		std::cout << "Business event" << std::endl;
		b_obj.event_update();
		b_obj.add_event_to_list(business_map);
	}
	else
	{
		std::cout << "there is not chose type avaliable\n";
	}
}


void cEvent_model::event_map_modify(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map)
{
	system("cls");
	char ans;
	std::cout << "choose type of event you want to modify:\n1 - formal event\n2 - private event\n3 - business event" << std::endl;
	ans = _getch();
	system("cls");
	if (ans == '1')
	{
		auto it = formal_map.begin();
		auto it_end = formal_map.end();

		for (; it != it_end; it++)
		{
			system("cls");
			it->event_show();
			std::cout << "press:\nm - to modify event\nn - next page\ne - exit program" << std::endl;
			char ans2 = _getch();
			switch (ans2)
			{
			case 'm':
				it->event_update();
				return;
				break;
			case 'e':
				exit(0);
			default:
				break;
			}
		}
	}
	else if (ans == '2')
	{
		auto it = private_map.begin();
		auto it_end = private_map.end();

		for (; it != it_end; it++)
		{
			system("cls");
			it->event_show();
			std::cout << "press:\nm - to modify event\nn - next page\ne - exit program" << std::endl;
			char ans2 = _getch();
			switch (ans2)
			{
			case 'm':
				it->event_update();
				return;
			case 'e':
				exit(0);
			default:
				break;
			}
		}
	}
	else if (ans == '3')
	{
		auto it = business_map.begin();
		auto it_end = business_map.end();

		for (; it != it_end; it++)
		{
			system("cls");
			it->event_show();
			std::cout << "press:\nm - to modify event\nn - next page\ne - exit program" << std::endl;
			char ans2 = _getch();
			switch (ans2)
			{
			case 'm':
				it->event_update();
				return;
			case 'e':
				exit(0);
			default:
				break;
			}
		}
	}
}



void cEvent_view::event_map_show(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map)
{
	system("cls");
	for (auto it = formal_map.begin(); it != formal_map.end(); it++)
	{
		it->event_show();
	}

	for (auto it = private_map.begin(); it != private_map.end(); it++)
	{
		it->event_show();
	}

	for (auto it = business_map.begin(); it != business_map.end(); it++)
	{
		it->event_show();
	}

	std::cout << "choose action:\n1 - menu\n - exit program" << std::endl;
	char ans = _getch();
	switch (ans)
	{
	case '1':
		return;
	case '2':
	default:
		exit(0);
	}
}




void cEvent_view::menu(std::list <cFormal_event>& formal_map, std::list<cPrivate_event>& private_map, std::list <cBusiness_event>& business_map, cEvent_controler& EC_obj, cEvent_model&EM_obj)
{
	system("cls");
	std::cout << "choose action:\n1 - add event\n2 - modify event\n3 - show all events\n4 - exit program" << std::endl;
	char ans = _getch();
	switch (ans)
	{
	case '1':
		EC_obj.event_map_add(formal_map, private_map, business_map);
		break;
	case '2':
		EM_obj.event_map_modify(formal_map, private_map, business_map);
		break;
	case '3':
		event_map_show(formal_map, private_map, business_map);
		break;
	case '4':
	default:
		exit(0);
	}
}
