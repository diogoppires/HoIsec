#include "Mine.h"

int Mine::counter = 0;
Mine::Mine() : Continent(TerritoryTypes::MINE, MINE_RESISTANCE, MINE_INIT_PRODS, MINE_INIT_GOLD, ++counter)
{
	std::cout << "[MINA] Construindo... " << Territory::getName() << std::endl;
}
TerritoryTypes Mine::getTerritoryType()
{
	return TerritoryTypes::MINE;
}

std::string Mine::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Mina'" << Continent::toString();
	return oss.str();
}
Mine::~Mine()
{
	std::cout << "[MINA] Destruindo... " << Territory::getName() << std::endl;
}