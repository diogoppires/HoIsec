#include "Plain.h"
#include <iostream>
#include <sstream>

int Plain::counter = 0;
Plain::Plain() : Continent(TerritoryTypes::PLAIN, PLAIN_RESISTANCE, PLAIN_FIRST_PRODS, PLAIN_FIRST_GOLD, ++counter)
{
#ifdef DEBUG
	std::cout << "[PLANICE] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG

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
Plain* Plain::clone() const
{
	return new Plain(*this);
}
void Plain::setInitValue()
{
	counter = 0;
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
#ifdef DEBUG
	std::cout << "[PLANICE] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG

}
