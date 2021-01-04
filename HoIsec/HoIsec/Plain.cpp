#include "Plain.h"
#include <iostream>

int Plain::counter = 0;
Plain::Plain() : Continent(TerritoryTypes::PLAIN, PLAIN_RESISTANCE, PLAIN_FIRST_PRODS, PLAIN_FIRST_GOLD, ++counter)
{
	std::cout << "[PLANICE] Construindo... " << Territory::getName() << std::endl;
}
TerritoryTypes Plain::getTerritoryType()
{
	return TerritoryTypes::PLAIN;
}

std::string Plain::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Planicie'" << Continent::toString();
	return oss.str();
}
Territory* Plain::clone() const
{
	return new Plain(*this);
}
void Plain::updateResources(int year, int turn)
{
	if (year == 1) {
		prodCreation = PLAIN_FIRST_PRODS;
	}
	else if (year == 2) {
		prodCreation = PLAIN_SECOND_PRODS;
	}
}
Plain::~Plain()
{
	std::cout << "[PLANICE] Destruindo... " << Territory::getName() << std::endl;
}
