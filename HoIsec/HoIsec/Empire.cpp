#include "Empire.h"
#include "StockExchange.h"
#include "CentralBank.h"
#include "Missile.h"
#include "Drone.h"
#include "Defenses.h"
//#include <iostream>
#include <sstream>

Empire::Empire(Territory* initial) : storage(), safe(), utils(), army(utils.generateArmy())
{
	stockExchange = new StockExchange();
	centralBank = new CentralBank(&storage, &safe);
	defenses = new Defenses();
	missiles = new Missile();
	drone = new Drone(&army);

	initial->changeConquered();
	empire.push_back(initial);
	score = 0;
	prodCreation = 0;
	goldCreation = 0;
	updateEmpire();

	//std::cout << "[EMPIRE] Construindo... " << std::endl;
}

Empire::Empire(const Empire& orig) : storage(orig.storage) , safe(orig.safe), army(orig.army),utils()
{
	for (auto t : orig.empire) {
		empire.push_back(t->clone());
	}

	stockExchange = orig.stockExchange->clone();
	centralBank = orig.centralBank->clone();
	drone = orig.drone->clone();
	missiles = orig.missiles->clone();
	defenses = orig.defenses->clone();

	score = orig.score;
	prodCreation = orig.prodCreation;
	goldCreation = orig.goldCreation;
}

//getter

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

int Empire::getTerritoryScore() const
{
	return score;
}

int Empire::getTechScore() const
{
	int techScore = 0;
	if (stockExchange->getActive()) {
		techScore += TECH_POINTS;
	}
	if (centralBank->getActive()) {
		techScore += TECH_POINTS;
	}
	if (drone->getActive()) {
		techScore += TECH_POINTS;
	}
	if (defenses->getActive()) {
		techScore += TECH_POINTS;
	}
	if (missiles->getActive()) {
		techScore += TECH_POINTS;
	}
	if (techScore == ALL_TECH) {
		techScore += EXTRA_SCIENTIFIC_BONUS;
	}
	return techScore;
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

int Empire::getEmpireSize() const
{
	return (int)empire.size();
}

void Empire::activeStockExchange()
{
	stockExchange->applyTech();
}

void Empire::activeCentralBank()
{
	centralBank->applyTech();
}

void Empire::activeDrone()
{
	drone->applyTech();
}

void Empire::activeDefenses()
{
	defenses->applyTech();
}

void Empire::activeMissiles()
{
	missiles->applyTech();
}

int Empire::useEffectDefenses(Territory * terr)
{
	return defenses->useEffect(terr);
}

//Checkers of Techs

bool Empire::haveStockExchange() const
{
	return stockExchange->getActive();
}

bool Empire::haveCentralBank() const
{
	return centralBank->getActive();
}

bool Empire::haveDrone() const 
{
	return drone->getActive();
}

bool Empire::haveMissiles() const
{
	return missiles->getActive();
}

bool Empire::haveDefenses() const
{
	return defenses->getActive();
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

bool Empire::increaseArmy(int quant)
{
	return army.addMiliForce(quant);
}

bool Empire::receiveGold(int quant)
{
	return safe.addGold(quant);
}

bool Empire::receiveProds(int quant)
{
	return storage.addProducts(quant);
}

bool Empire::decreaseArmy(int quant)
{
	return army.subMiliForce(quant);
}

bool Empire::spendGold(int quant)
{
	return safe.subGold(quant);
}

bool Empire::spendProds(int quant)
{
	return storage.subProducts(quant);
}

int Empire::setProds(int quant)
{
	return storage.setProducts(quant);
}

int Empire::setGold(int quant)
{
	return safe.setGold(quant);
}


bool Empire::addTerritory(Territory* territory)
{
	if (!checkHaveTerritory(territory)) {
		empire.push_back(territory);
		territory->changeConquered();
		updateEmpire();
		return true;
	}
	return false;
}

bool Empire::checkHaveTerritory(Territory* territory)
{
	for (Territory* t : empire) {
		if (t == territory) return true;
	}
	return false;
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
	updateEmpire();
	return false;
}

void Empire::deleteLastTerritory()
{
	std::vector<Territory*>::iterator it = empire.end() - 1;
	(*it)->changeNotConquered();
	empire.pop_back();
}

void Empire::resetEmpire()
{
	empire.clear();
}

Territory* Empire::getLastConquer()
{
	return empire.back();
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
	//oss << army.toString() --miss
	oss << "Tem uma bolsa de valores?\t" << (haveStockExchange()) ? "Sim\n" : "Nao\n";
	oss << "Tem um banco central?\t" << (haveCentralBank()) ? "Sim\n" : "Nao\n";
	oss << "Tem defesas territoriais?\t" << (haveDefenses()) ? "Sim\n" : "Nao\n";
	oss << "Tem misseis teleguiados?\t" << (haveMissiles()) ? "Sim\n" : "Nao\n";
	oss << "Tem drones militares?\t" << (haveDrone()) ? "Sim\n" : "Nao\n";
	return oss.str();
}

Empire::~Empire()
{
	delete stockExchange;
	delete centralBank;
	delete drone;
	delete missiles;
	delete defenses;
	//std::cout << "[EMPIRE] Destruindo... " << std::endl;
}
