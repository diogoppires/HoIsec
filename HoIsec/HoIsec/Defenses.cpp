#include "Defenses.h"

Defenses::Defenses() : Technology(PRICE_TECH_DEFENSES){
	std::cout << "[DEFENSES] Construindo...\n"; // DEBUG
}

void Defenses::applyTech() {
	setActiveTrue();
}

Defenses::~Defenses() {
	std::cout << "[DEFENSES] Destruindo...\n"; // DEBUG
}