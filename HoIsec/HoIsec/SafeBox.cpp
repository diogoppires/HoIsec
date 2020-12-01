#include "SafeBox.h"

SafeBox::SafeBox()
{
	setCentralBankFalse();
	gold = 0;
	std::cout << "[SAFEBOX] Construindo..." << std::endl;
}

int SafeBox::getSafeBox() const
{
	return gold;
}

int SafeBox::getMaxSafeBox() const
{
	return maxGold;
}

void SafeBox::setCentralBankTrue()
{
	centralBank = true;
	maxGold = MAX_SAFEBOX_WITH_CENTRALBANK;
}

void SafeBox::setCentralBankFalse()
{
	centralBank = false;
	maxGold = MAX_SAFEBOX;
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
