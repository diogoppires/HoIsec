#pragma once
#ifndef DEFENSES_H
#define DEFENSES_H
#include "Technology.h"
#include "Territory.h"

class Defenses : public Technology
{
public:
	Defenses();
	void applyTech() override;
	int useEffect(Territory * terr) override;
	Defenses* clone() const override;
	virtual ~Defenses() override;
};

#endif // !DEFENSES_H
