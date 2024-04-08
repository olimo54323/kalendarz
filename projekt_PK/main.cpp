#include <string>
#include <iostream>
#include <list>

#include "c_private_event.h"
#include "c_business_event.h"
#include "c_formal_event.h"
#include "function.h"
#include "c_mvc.h"
#include "c_csv_generator.h"

using namespace std;

std::list<cBusiness_event> business_map;
std::list<cPrivate_event> private_map;
std::list<cFormal_event> formal_map;

int main()
{
	cEvent_view EV_obj;
	cEvent_controler EC_obj;
	cEvent_model EM_obj;
	for (;;)
	{
		EV_obj.menu(formal_map, private_map, business_map, EC_obj, EM_obj);
	}
	return 0;
}

// TODO:
//		CSV GENERATOR: (JEŒLI CZAS POZWOLI)
//			- dodaæ 
//				- ID do generowania wierszy
//				- wpisywanie wierszy string do pliku CSV (poprzez fstream)
//				- czytanie pliku CSV do programu (poprzez fstream)
//				- wyszukiwanie wydarzenia na bazie ID 
//				- usuwanie wierszy na bazie ID
// 
//		DOKUMENTACJA:
//			- dodaæ komentarze
//			- wygenerowaæ LATEX'A
//





