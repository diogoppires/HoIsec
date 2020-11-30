#include "Army.h"


Army::Army(int miliForce)
{
	this->miliForce = miliForce;
	std::cout << "[ARMY] Constroying army" << std::endl;
}

Army::~Army() {
	std::cout << "[ARMY] Destroying army" << std::endl;
}

bool Army::addMiliForce(int value) {
	if (miliDrone) {
		if ((miliForce + value) <= MAX_MILIFORCE_WITH_DRONE) {
			miliForce += value;
			return true;
		}
	}
	else {
		if ((miliForce + value) <= MAX_MILIFORCE) {
			miliForce += value;
			return true;
		}
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
int Army::getMiliforce() const {
	return miliForce;
}
void Army::setMiliDroneTrue() {
	miliDrone = true;
}
void Army::setMiliDroneFalse() {
	miliDrone = false;
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