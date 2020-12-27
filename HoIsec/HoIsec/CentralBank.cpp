#include "CentralBank.h"

CentralBank(Storage* empireStorage, SafeBox* empireSafeBox) : Technology(PRICE_TECH_CENTRALBANK) {
	this->empireStorage = empireStorage;
	this->empireSafeBox = empireSafeBox;
}

void CentralBank::applyTech() {

}
