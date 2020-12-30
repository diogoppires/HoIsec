#include "Drone.h"

Drone::Drone(Army* army):Technology(PRICE_TECH_DRONE) {
	this->army = army;
	std::cout << "[DRONE] Construindo...\n"; // DEBUG

}

void Drone::applyTech() {
	setActiveTrue();
	army->setMaxMiliForce(MAX_MILIFORCE_WITH_DRONE);
}

Drone::~Drone() {
	std::cout << "[DRONE] Destruindo...\n"; // DEBUG
}

