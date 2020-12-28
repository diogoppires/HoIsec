#include "StockExchange.h"

StockExchange::StockExchange() : Technology(PRICE_TECH_STOCKEXCHANGE) {
	std::cout << "[StockExchange] Construindo...\n";
}

StockExchange::~StockExchange() {
	std::cout << "[StockExchange] Destruindo...\n";
}
void StockExchange::applyTech(){
	setActiveTrue();
}
