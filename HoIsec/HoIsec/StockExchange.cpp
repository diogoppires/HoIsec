#include "StockExchange.h"
#include <iostream>
#include "data.h"

StockExchange::StockExchange() : Technology(PRICE_TECH_STOCKEXCHANGE) {
	std::cout << "[StockExchange] Construindo...\n";
}

StockExchange::~StockExchange() {
	std::cout << "[StockExchange] Destruindo...\n";
}
void StockExchange::applyTech(){
	setActiveTrue();
}

StockExchange* StockExchange::clone() const
{
	return new StockExchange(*this);
}
