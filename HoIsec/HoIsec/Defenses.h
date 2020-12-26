#pragma once
#ifndef DEFENSES_H
#define DEFENSES_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class Defenses : public Technology
{
public:
	void applyTech(Empire empire) const;
};

#endif // !DEFENSES_H
