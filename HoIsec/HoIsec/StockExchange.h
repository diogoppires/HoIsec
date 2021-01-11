#pragma once
#ifndef STOCKEXCHANGE_H
#define STOCKEXCHANGE_H
#include "Technology.h"

class StockExchange: public Technology
{
public:
	StockExchange();
	void applyTech() override;
	int useEffect(Territory* terr) override { return 0; }
	StockExchange* clone() const override;
	virtual ~StockExchange() override;
};
#endif // !STOCKEXCHANGE_H



