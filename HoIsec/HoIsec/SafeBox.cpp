#include "SafeBox.h"
#include <iostream>
#include <sstream>
#include "data.h"

SafeBox::SafeBox()
{
	maxGold = MAX_SAFEBOX;
	gold = 0;
	std::cout << "[SAFEBOX] Construindo..." << std::endl;
}

SafeBox::SafeBox(const SafeBox& orig)
{
	gold = orig.gold;
	maxGold = orig.maxGold;
	std::cout << "[SAFEBOX] Contruindo por copia..." << std::endl;
}

int SafeBox::getSafeBox() const
{
	return gold;
}

int SafeBox::getMaxSafeBox() const
{
	return maxGold;
}

bool SafeBox::addGold(int quant)
{
	if (quant <= 0) return false;
	if (gold + quant > maxGold) {
		gold = maxGold;
	}else
		gold += quant;
	return true;
}

bool SafeBox::subGold(int quant)
{
	if (quant <= 0) return false;
	if (gold - quant < 0) {
		gold = 0;
	}
	else
		gold -= quant;
	return true;
}

void SafeBox::setMaxGold(int max) 
{
	this->maxGold = max;
}
int SafeBox::setGold(int value)
{
	if (value <= 0) return 0;
	if (value > maxGold) {
		gold = maxGold;
		return 2;
	}
	else
		gold = value;
	return 1;
}
std::string SafeBox::toString() const
{
	std::ostringstream oss;
	oss << "[SAFEBOX] Gold: " << gold << std::endl;
	return oss.str();
}

SafeBox::~SafeBox()
{
	std::cout << "[SAFEBOX] Destruindo..." << std::endl;
}
