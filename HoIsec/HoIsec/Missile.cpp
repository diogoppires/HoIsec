#include "Missile.h"
#include <iostream>
#include "data.h"

Missile::Missile(): Technology(PRICE_TECH_MISSILES) {
#ifdef DEBUG
	std::cout << "[MISSILE] Construindo...\n";
#endif // DEBUG

}

void Missile::applyTech(){
	setActiveTrue();
}

Missile* Missile::clone() const
{
	return new Missile(*this);
}

Missile::~Missile() {
#ifdef DEBUG
	std::cout << "[MISSILE] Destruindo...\n";
#endif // DEBUG

}