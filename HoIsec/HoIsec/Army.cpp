#include "Army.h"


Army::Army(int miliForce)
{
	this->miliForce = miliForce;
	setMiliDroneFalse();
	std::cout << "[ARMY] Contruindo..." << std::endl;
}

Army::~Army() {
	std::cout << "[ARMY] Destruindo..." << std::endl;
}

bool Army::addMiliForce(int value) {

	if ((miliForce + value) <= maxMiliForce) {
		miliForce += value;
		return true;
	}
	return false;
}
bool Army::subMiliForce(int value) {
	if ((miliForce - value) <= 0) {
		miliForce -= value;
		return true;
	}
	return false;
}
int Army::getMiliForce() const {
	return miliForce;
}
void Army::setMiliDroneTrue() {
	miliDrone = true;
	maxMiliForce = MAX_MILIFORCE_WITH_DRONE;
}
void Army::setMiliDroneFalse() {
	miliDrone = false;
	maxMiliForce = MAX_MILIFORCE;
}
bool Army::getMiliDrone() const {
	return miliDrone;
}
void Army::setMisilesTrue() {
	missiles = true;
}
void Army::setMissilesFalse() {
	missiles = false;
}
bool Army::getMissiles() const {
	return missiles;
}
void Army::setTerritoryDefTrue() {
	territoryDef = true;
}
void Army::setTerritoryDefFalse() {
	territoryDef = false;
}
bool Army::getTerritoryDef() const {
	return territoryDef;
}

int Army::getMaxMiliForce() const
{
	return maxMiliForce;
}
