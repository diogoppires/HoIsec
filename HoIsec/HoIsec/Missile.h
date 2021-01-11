#pragma once
#ifndef MISSILE_H
#define MISSILE_H
#include "Technology.h"

class Missile : public Technology
{
public:
	Missile();
	void applyTech() override;
	int useEffect(Territory* terr) override { return 0; }
	Missile* clone() const override;
	virtual ~Missile() override;
};

#endif // !MISSILE_H
