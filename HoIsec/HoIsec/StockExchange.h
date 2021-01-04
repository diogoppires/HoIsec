#pragma once
#ifndef STOCKEXCHANGE_H
#define STOCKEXCHANGE_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class StockExchange: public Technology
{
public:
	StockExchange();
	void applyTech() override;
	Technology* clone() const override;
	virtual ~StockExchange() override;
};
#endif // !STOCKEXCHANGE_H



