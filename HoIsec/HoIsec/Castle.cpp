#include "Castle.h"

int Castle::counter = 0;
Castle::Castle() : Continent(TerritoryTypes::CASTLE, CASTLE_RESISTANCE, CASTLE_FIRST_PRODS, CASTLE_FIRST_GOLD, ++counter)
{
	std::cout << "[CASTELO] Construindo... " << Territory::getName() << std::endl;
}

TerritoryTypes Castle::getTerritoryType()
{
	return TerritoryTypes::CASTLE;
}

std::string Castle::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Castelo'" << Continent::toString();
	return oss.str();
}

Territory* Castle::clone() const
{
	return new Castle(*this);
}

void Castle::setInitValue()
{
	counter = 0;
}

void Castle::updateResources(int year, int turn)
{
	if (turn == 1 || turn == 2) {
		prodCreation = CASTLE_FIRST_PRODS;
	}
	else {
		prodCreation = CASTLE_SECOND_PRODS;
	}
}

Castle::~Castle()
{
	std::cout << "[CASTELO] Destruindo... " << Territory::getName() << std::endl;
}