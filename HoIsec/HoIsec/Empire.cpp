#include "Empire.h"

Empire::Empire(Territory* initial) : storage(), safe()
{
	empire.push_back(&initial);
	stockExchange = false;
	centralBank = false;
	std::cout << "[Empire]: Constroying... " << std::endl;
}

int Empire::getGold() const
{
	return safe.getSafeBox();
}

int Empire::getProds() const
{
	return storage.getProducts();
}

int Empire::haveStockExchange() const
{
	return stockExchange;
}

int Empire::haveCentralBank() const
{
	return centralBank;
}

bool Empire::receiveGold(int quant)
{
	return safe.addGold(quant);
}

bool Empire::receiveProds(int quant)
{
	return storage.addProducts(quant);
}

bool Empire::spendGold(int quant)
{
	return safe.subGold(quant);
}

bool Empire::spendProds(int quant)
{
	return storage.subProducts(quant);
}

void Empire::attack(Territory** territory)
{
}

std::string Empire::toString() const
{
	std::ostringstream oss;
	if (empire.size() == 0) {
		oss << "[TERRITORIES]: NONE" << std::endl;
	}
	else {
		for (Territory** t : empire)
		{
			oss << (*t)->toString();
		}
		return oss.str();
	}
	oss << storage.toString();
	oss << safe.toString();
	//Army.string
	oss << "Have a Stock Exchange?";
	if (stockExchange) {
		oss << " Yes" << std::endl;
	}
	else {
		oss << " No" << std::endl;
	}
	oss << "Have a Central Bank?";
	if (centralBank) {
		oss << " Yes" << std::endl;
	}
	else {
		oss << " No" << std::endl;
	}
	return oss.str();
}

Empire::~Empire()
{
	for (Territory** t : empire)
	{
		delete t;
		std::cout << "[Empire] Estou dentro vetor 'empire' a destruir" << std::endl;
	}
	std::cout << "[Empire]: Destryoing... " << std::endl;
}
