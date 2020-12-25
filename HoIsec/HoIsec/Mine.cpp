#include "Mine.h"

int Mine::counter = 0;
Mine::Mine() : Continent(TerritoryTypes::MINE, MINE_RESISTANCE, MINE_INIT_PRODS, MINE_INIT_GOLD, ++counter)
{
	std::cout << "[MINA] Construindo... " << Territory::getName() << std::endl;
}

Mine::~Mine()
{
	std::cout << "[MINA] Destruindo... " << Territory::getName() << std::endl;
}