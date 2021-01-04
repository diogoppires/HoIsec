#include "Mountain.h"

int Mountain::counter = 0;
Mountain::Mountain() : Continent(TerritoryTypes::MOUNTAIN, MOUNTAIN_RESISTANCE, MOUNTAIN_FIRST_PRODS, MOUNTAIN_FIRST_GOLD, ++counter)
{
	std::cout << "[MONTANHA] Construindo... " << Territory::getName() << std::endl;
}
TerritoryTypes Mountain::getTerritoryType()
{
	return TerritoryTypes::MOUNTAIN;
}

std::string Mountain::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Montanha'" << Continent::toString();
	return oss.str();
}
Territory* Mountain::clone() const
{
	return new Mountain(*this);
}
void Mountain::setInitValue()
{
	counter = 0;
}
void Mountain::updateResources(int year,int turn)
{
	if (conquered) {
		int turnConq = turnConquer * yearConquer;

		if ((year * turn) - turnConq > 2) {
			prodCreation = MOUNTAIN_SECOND_PRODS;
		}
		else {
			prodCreation = MOUNTAIN_FIRST_PRODS;
		}
	}
}
Mountain::~Mountain()
{
	std::cout << "[MONTANHA] Destruindo... " << Territory::getName() << std::endl;
}