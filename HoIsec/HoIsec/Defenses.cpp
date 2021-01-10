#include "Defenses.h"
#include <iostream>
#include "data.h"

Defenses::Defenses() : Technology(PRICE_TECH_DEFENSES){
	std::cout << "[DEFENSES] Construindo...\n"; // DEBUG
}

void Defenses::applyTech() {
	setActiveTrue();
}

int Defenses::useEffect(Territory* terr)
{
	return terr->getResistance() + ((active) ? 1 : 0);
}

Technology* Defenses::clone() const
{
	return new Defenses(*this);
}

Defenses::~Defenses() {
	std::cout << "[DEFENSES] Destruindo...\n"; // DEBUG
}
