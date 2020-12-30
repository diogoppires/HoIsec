#pragma once
#ifndef DEFENSES_H
#define DEFENSES_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Defenses : public Technology
{
public:
	Defenses();
	void applyTech() override;
	virtual ~Defenses() override;
};

#endif // !DEFENSES_H
