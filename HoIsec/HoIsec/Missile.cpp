#include "Missile.h"

Missile::Missile(): Technology(PRICE_TECH_MISSILES) {
	std::cout << "[MISSILE] Construindo...\n";
}

void Missile::applyTech(){
	setActiveTrue();
}

Missile::~Missile() {
	std::cout << "[MISSILE] Destruindo...\n";
}