#include "Storage.h"

Storage::Storage()
{
	products = 0;
	std::cout << "[Storage]: Constroying..." << std::endl;
}

int Storage::getProducts() const
{
	return products;
}

bool Storage::addProducts(int quant)
{
	if (quant <= 0) return false;
	products += quant;
	return true;
}

bool Storage::subProducts(int quant)
{
	if (quant <= 0) return false;
	products -= quant;
	return true;
}

std::string Storage::toString() const
{
	std::ostringstream oss;
	oss << "[STORAGE] Storage: " << products << std::endl;
	return oss.str();
}

Storage::~Storage()
{
	std::cout << "[STORAGE]: Destroying..." << std::endl;
}
