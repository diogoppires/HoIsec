#include "Empire.h"

Empire::Empire(Territory* initial) : storage(), safe(), utils(), army(utils.generateArmy())
{
	initial->changeConquered();
	empire.push_back(initial);
	stockExchange = false;
	centralBank = false;

	score = 0;
	prodCreation = 0;
	goldCreation = 0;
	updateEmpire();

	std::cout << "[EMPIRE] Construindo... " << std::endl;
}

int Empire::getGold() const
{
	return safe.getSafeBox();
}

int Empire::getGoldCreation() const
{
	return goldCreation;
}

int Empire::getProds() const
{
	return storage.getProducts();
}

int Empire::getProdsCreation() const
{
	return prodCreation;
}

int Empire::getScore() const
{
	return score;
}

int Empire::getMiliForce() const
{
	return army.getMiliForce();
}

int Empire::getMaxMiliForce() const
{
	return army.getMaxMiliForce();
}

int Empire::getMaxStorage() const
{
	return storage.getMaxProducts();
}

int Empire::getMaxSafeBox() const
{
	return safe.getMaxSafeBox();
}

int Empire::haveStockExchange() const
{
	return stockExchange;
}

int Empire::haveCentralBank() const
{
	return centralBank;
}

void Empire::updateEmpire()
{
	int auxScore = 0,auxProd = 0,auxGold = 0;
	for (Territory* territory : empire) {
		auxScore += territory->getWinPoints();
		auxProd += territory->getProdCreation();
		auxGold += territory->getGoldCreation();
	}
	score = auxScore;
	prodCreation = auxProd;
	goldCreation = auxGold;
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

bool Empire::attack(Territory* territory,int luckyFactor)
{
	int sumForces = army.getMiliForce() + luckyFactor;
	if (sumForces >= territory->getResistance()) {
		empire.push_back(territory);
		territory->changeConquered();
		updateEmpire();
		return true;
	}
	army.subMiliForce(MILIFORCE_LOST);
	return false;
}

std::string Empire::toString() const
{
	std::ostringstream oss;
	if (empire.size() == 0) {
		oss << "[TERRITORIES]: NONE" << std::endl;
	}
	else {
		for (Territory* t : empire)
		{
			oss << t->toString();
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
	std::cout << "[EMPIRE] Destruindo... " << std::endl;
}
