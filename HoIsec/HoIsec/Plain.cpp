#include "Plain.h"
#include <iostream>

int Plain::counter = 0;
Plain::Plain() : Continent(TerritoryTypes::PLAIN, PLAIN_RESISTANCE, PLAIN_INIT_PRODS, PLAIN_INIT_GOLD, ++counter)
{
	std::cout << "[PLANICE] Construindo... " << Territory::getName() << std::endl;
}

Plain::~Plain()
{
	std::cout << "[PLANICE] Destruindo... " << Territory::getName() << std::endl;
}
