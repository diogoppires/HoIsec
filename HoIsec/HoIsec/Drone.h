#pragma once
#ifndef DRONE_H
#define DRONE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Drone : public Technology
{
public:
	void applyTech(Empire empire) const;
};

#endif // !DRONE_H



