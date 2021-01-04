#include "Missile.h"

Missile::Missile(): Technology(PRICE_TECH_MISSILES) {
	std::cout << "[MISSILE] Construindo...\n";
}

void Missile::applyTech(){
	setActiveTrue();
}

Technology* Missile::clone() const
{
	return new Missile(*this);
}

Missile::~Missile() {
	std::cout << "[MISSILE] Destruindo...\n";
}