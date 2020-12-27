#include "Technology.h"

Technology::Technology(int price) {
	setActiveFalse();
	this->price = price;
	std::cout << "[TECHNOLOGY] Construindo...\n";
}
Technology::~Technology() {
	std::cout << "[TECHNOLOGY] Destruindo...\n";
}
void Technology::setActiveTrue() {
	this->active = true;
}

void Technology::setActiveFalse() {
	this->active = false;
}

bool Technology::getActive() const {
	return active;
}

int Technology::getPrice() const {
	return price;
}
