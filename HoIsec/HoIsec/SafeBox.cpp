#include "SafeBox.h"

SafeBox::SafeBox()
{
	gold = 0;
	std::cout << "[SafeBox]: Constructing..." << std::endl;
}

int SafeBox::getSafeBox() const
{
	return gold;
}

bool SafeBox::addGold(int quant)
{
	if (quant <= 0) return false;
	gold += quant;
	return true;
}

bool SafeBox::subGold(int quant)
{
	if (quant <= 0) return false;
	gold -= quant;
	return true;
}

std::string SafeBox::toString() const
{
	std::ostringstream oss;
	oss << "[SAFEBOX] Gold: " << gold << std::endl;
	return oss.str();
}

SafeBox::~SafeBox()
{
	std::cout << "[SafeBox]: Destroying..." << std::endl;
}
