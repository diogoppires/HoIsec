#include "Defenses.h"

Defenses::Defenses() : Technology(PRICE_TECH_DEFENSES){
	std::cout << "[DEFENSES] Construindo...\n"; // DEBUG
}

void Defenses::applyTech() {
	setActiveTrue();
}

Technology* Defenses::clone() const
{
	return new Defenses(*this);
}

Defenses::~Defenses() {
	std::cout << "[DEFENSES] Destruindo...\n"; // DEBUG
}
