#include "Defenses.h"
#include <iostream>
#include "data.h"

Defenses::Defenses() : Technology(PRICE_TECH_DEFENSES){
#ifdef DEBUG
	std::cout << "[DEFENSES] Construindo...\n";
#endif // DEBUG

}

void Defenses::applyTech() {
	setActiveTrue();
}

int Defenses::useEffect(Territory* terr)
{
	return terr->getResistance() + ((active) ? 1 : 0);
}

Defenses* Defenses::clone() const
{
	return new Defenses(*this);
}

Defenses::~Defenses() {
#ifdef DEBUG
	std::cout << "[DEFENSES] Destruindo...\n"; // DEBUG
#endif // DEBUG

}
