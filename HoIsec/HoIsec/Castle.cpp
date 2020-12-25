#include "Castle.h"

int Castle::counter = 0;
Castle::Castle() : Continent(TerritoryTypes::CASTLE, CASTLE_RESISTANCE, CASTLE_INIT_PRODS, CASTLE_INIT_GOLD, ++counter)
{
	std::cout << "[CASTELO] Construindo... " << Territory::getName() << std::endl;
}

Castle::~Castle()
{
	std::cout << "[CASTELO] Destruindo... " << Territory::getName() << std::endl;
}