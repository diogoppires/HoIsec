#include "Mine.h"

int Mine::counter = 0;
Mine::Mine() : Continent(TerritoryTypes::MINE, MINE_RESISTANCE, MINE_FIRST_PRODS, MINE_FIRST_GOLD, ++counter)
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
Territory* Mine::clone() const
{
	return new Mine(*this);
}
void Mine::setInitValue()
{
	counter = 0;
}
void Mine::updateResources(int year, int turn)
{
	if (turn > 0 && turn < 4) {
		goldCreation = MINE_FIRST_GOLD;
	}
	else {
		goldCreation = MINE_SECOND_GOLD;
	}
}
Mine::~Mine()
{
	std::cout << "[MINA] Destruindo... " << Territory::getName() << std::endl;
}