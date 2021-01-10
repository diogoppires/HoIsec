#pragma once
#ifndef DRONE_H
#define DRONE_H

#include "Army.h"
#include "Technology.h"

class Drone : public Technology
{
	Army* army;
public:
	Drone(Army* army);
	void applyTech() override;
	int useEffect(Territory* terr) override { return 0; }
	Drone* clone() const override;
	virtual ~Drone() override;
};

#endif // !DRONE_H



