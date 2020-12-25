#include "Territory.h"

Territory::Territory(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int winPoints, int counter):converter(){
	name = buildName(type, counter);
	this->resistance = resistance;
	this->prodCreation = prodCreation;
	this->goldCreation = goldCreation;
	this->winPoints = winPoints;
	this->conquered = false;
	std::cout << "[TERRITORY] Construindo... " << name << std::endl;
}

Territory::~Territory() {
	std::cout << "[TERRITORY] Destruindo... " << name << std::endl;
}

std::string Territory::toString() {
	std::ostringstream oss;

	oss << "TIPO = 'Territorio'\n\tNome: " << name << "\n\tResistencia: " << resistance <<
		"\n\tQuantidade de produtos gerados por turno: " << prodCreation << "\n\tQuantidade de ouro gerado por turno: " <<
		goldCreation << "\n\tPontos de vitoria: " << std::endl;
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

bool Territory::isConquered() const
{
	return conquered;
}

void Territory::changeConquered()
{
	conquered = true;
}

void Territory::changeNotConquered()
{
	conquered = false;
}

std::string Territory::buildName(TerritoryTypes type,int value) {
	std::ostringstream oss;

	oss << converter.TerritoryTypesToString(type) << value;
	return oss.str();
}