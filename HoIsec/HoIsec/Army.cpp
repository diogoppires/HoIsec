#include "Army.h"
#include <iostream>
#include "data.h"

Army::Army(int miliForce)
{
	this->maxMiliForce = MAX_MILIFORCE;
	this->miliForce = miliForce;
#ifdef DEBUG
	std::cout << "[ARMY] Contruindo..." << std::endl;
#endif // DEBUG

}

Army::Army(const Army& orig)
{
	miliForce = orig.miliForce;
	maxMiliForce = orig.maxMiliForce;
#ifdef DEBUG
	std::cout << "[ARMY] Contruindo por copia..." << std::endl;
#endif // DEBUG

}

Army::~Army() {
#ifdef DEBUG
	std::cout << "[ARMY] Destruindo..." << std::endl;
#endif // DEBUG

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

int Army::getMaxMiliForce() const
{
	return maxMiliForce;
}

void Army::setMaxMiliForce(int max) {
	this->maxMiliForce = max;
}