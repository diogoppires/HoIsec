#include "CentralBank.h"

CentralBank::CentralBank(Storage* empireStorage, SafeBox* empireSafeBox) : Technology(PRICE_TECH_CENTRALBANK) {
	this->empireStorage = empireStorage;
	this->empireSafeBox = empireSafeBox;
	std::cout << "[CENTRALBANK] Construindo...\n"; // DEBUG
}

void CentralBank::applyTech() {
	setActiveTrue();
	empireStorage->setMaxProducts(MAX_STORAGE_WITH_CENTRALBANK);
	empireSafeBox->setMaxGold(MAX_SAFEBOX_WITH_CENTRALBANK);
}

CentralBank::~CentralBank() {
	std::cout << "[CENTRALBANK] Desstruindo...\n"; // DEBUG
}