#pragma once
#ifndef DUNE_H
#define DUNE_H
#include "Continent.h"

class Dune : public Continent
{
private:
	static int counter;
public:
	Dune();
	~Dune();
};
#endif // !DUNE_H

