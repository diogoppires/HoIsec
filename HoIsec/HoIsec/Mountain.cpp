#include "Mountain.h"

int Mountain::counter = 0;
Mountain::Mountain() : Continent(TerritoryTypes::MOUNTAIN, MOUNTAIN_RESISTANCE, MOUNTAIN_INIT_PRODS, MOUNTAIN_INIT_GOLD, ++counter)
{
	std::cout << "[MONTANHA] Construindo... " << Territory::getName() << std::endl;
}

Mountain::~Mountain()
{
	std::cout << "[MONTANHA] Destruindo... " << Territory::getName() << std::endl;
}