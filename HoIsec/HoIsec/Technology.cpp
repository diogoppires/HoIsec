#include "Technology.h"
#include <iostream>

Technology::Technology(int price) {
	setActiveFalse();
	this->price = price;
#ifdef DEBUG
	std::cout << "[TECHNOLOGY] Construindo...\n"; //DEBUG
#endif // DEBUG
}
Technology::~Technology() {
#ifdef DEBUG
	std::cout << "[TECHNOLOGY] Destruindo...\n"; //DEBUG
#endif // DEBUG

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
