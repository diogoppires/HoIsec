#include "StockExchange.h"
#include <iostream>
#include "data.h"

StockExchange::StockExchange() : Technology(PRICE_TECH_STOCKEXCHANGE) {
#ifdef DEBUG
	std::cout << "[StockExchange] Construindo...\n";
#endif // DEBUG

}

StockExchange::~StockExchange() {
#ifdef DEBUG
	std::cout << "[StockExchange] Destruindo...\n";
#endif // DEBUG

}
void StockExchange::applyTech(){
	setActiveTrue();
}

StockExchange* StockExchange::clone() const
{
	return new StockExchange(*this);
}
