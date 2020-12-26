#pragma once
#ifndef STOCKEXCHANGE_H
#define STOCKEXCHANGE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class StockExchange: public Technology
{
public:
	void applyTech(Empire empire) const;
};
#endif // !STOCKEXCHANGE_H



