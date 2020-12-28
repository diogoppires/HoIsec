#pragma once
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Drone : public Technology
{
	Army* army;
public:
	Drone(Army* army);
	void applyTech() override;
	virtual ~Drone() override;
};

#endif // !DRONE_H



