#include "Missile.h"
//#include <iostream>
#include "data.h"

Missile::Missile(): Technology(PRICE_TECH_MISSILES) {
	//std::cout << "[MISSILE] Construindo...\n";
}

void Missile::applyTech(){
	setActiveTrue();
}

Missile* Missile::clone() const
{
	return new Missile(*this);
}

Missile::~Missile() {
	//std::cout << "[MISSILE] Destruindo...\n";
}