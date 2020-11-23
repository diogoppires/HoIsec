#include "Territory.h"

int Territory::count = 0;

Territory::Territory(TerritoryTypes type) :converter(){
	name = buildName(type, ++count);
	resistance = DEFAULT_RESISTANCE;
	prodCreation = DEFAULT_PRODCREATION;
	goldCreation = DEFAULT_GOLDCREATION;
	winPoints = DEFAULT_WINPOINTS;
}

Territory::~Territory() {
	std::cout << "[Territory] Destroying " << name << std::endl;
}

std::string Territory::toString() {
	std::ostringstream oss;

	oss << "[TERRITORY] Name: " << name << " | Resistance: " << resistance <<
		" | Product Creation: " << prodCreation << " | Gold Creation: " <<
		goldCreation << " | Victory Points: " << winPoints << std::endl;
	return oss.str();
}

std::string Territory::getName() const {
	return name;
}

int Territory::getResistance() const {
	return resistance;
}

void Territory::setResistance(int resistance) {
	this->resistance = resistance;
}

int Territory::getProdCreation() const {
	return prodCreation;
}

void Territory::setProdCreation(int prodCreation) {
	this->prodCreation = prodCreation;
}

int Territory::getGoldCreation() const {
	return goldCreation;
}

void Territory::setGoldCreation(int goldCreation) {
	this->goldCreation = goldCreation;
}

int Territory::getWinPoints() const {
	return winPoints;
}

void Territory::setWinPoints(int winPoints) {
	this->winPoints = winPoints;
}

std::string Territory::buildName(TerritoryTypes type,int value) {
	std::ostringstream oss;

	oss << converter.TerritoryTypesToString(type) << value;
	return oss.str();
}