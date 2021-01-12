#include "Drone.h"
#include <iostream>
#include "data.h"

Drone::Drone(Army* army):Technology(PRICE_TECH_DRONE) {
	this->army = army;
#ifdef DEBUG
	std::cout << "[DRONE] Construindo...\n"; // DEBUG
#endif // DEBUG
}

void Drone::applyTech() {
	setActiveTrue();
	army->setMaxMiliForce(MAX_MILIFORCE_WITH_DRONE);
}

Drone* Drone::clone() const
{
	return new Drone(*this);
}

Drone::~Drone() {
#ifdef DEBUG
	std::cout << "[DRONE] Destruindo...\n"; // DEBUG
#endif // DEBUG
}

