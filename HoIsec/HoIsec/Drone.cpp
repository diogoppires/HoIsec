#include "Drone.h"
#include <iostream>
#include "data.h"

Drone::Drone(Army* army):Technology(PRICE_TECH_DRONE) {
	this->army = army;
	std::cout << "[DRONE] Construindo...\n"; // DEBUG

}

void Drone::applyTech() {
	setActiveTrue();
	army->setMaxMiliForce(MAX_MILIFORCE_WITH_DRONE);
}

Technology* Drone::clone() const
{
	return new Drone(*this);
}

Drone::~Drone() {
	std::cout << "[DRONE] Destruindo...\n"; // DEBUG
}

