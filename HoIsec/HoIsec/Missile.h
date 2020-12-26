#pragma once
#ifndef MISSILE_H
#define MISSILE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Missile : public Technology
{
public:
	void applyTech(Empire empire) const;
};

#endif // !MISSILE_H
