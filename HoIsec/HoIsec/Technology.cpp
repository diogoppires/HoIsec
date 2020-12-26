#include "Technology.h"

void Technology::setActiveTrue() {
	this->active = true;
}

void Technology::setActiveFalse() {
	this->active = false;
}

bool Technology::getActive() const {
	return active;
}
