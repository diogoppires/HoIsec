#include "AbandonedResource.h"
#include "GameData.h"
#include <iostream>
#include <string>

AbandonedResource::AbandonedResource(GameData* gD) : Event(gD)
{
	std::cout << "[EVENTO - RECURSO ABANDONADO] Construindo...\n";
}

std::string AbandonedResource::applyEvent() const
{
	if(getGameData()->getYear() == 1){
		getGameData()->getEmpire().receiveProds(ABANDONED_PRODUCT_QTY);
		return ABANDONED_PRODUCT;
	}
	else {
		getGameData()->getEmpire().receiveProds(ABANDONED_GOLD_QTY);
		return ABANDONED_GOLD;
	}
}

std::string AbandonedResource::toString() const
{
	return EVENT_ABANDONED_RESOURCE;
}

AbandonedResource::~AbandonedResource()
{
	std::cout << "[EVENTO - RECURSO ABANDONADO] Destruindo...\n";
}
