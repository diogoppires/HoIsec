#pragma once
#ifndef MISSILE_H
#define MISSILE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Missile : public Technology
{
public:
	Missile();
	void applyTech() override;
	virtual ~Missile() override;
};

#endif // !MISSILE_H
