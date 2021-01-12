#include "AbandonedResource.h"
#include <iostream>
#include <sstream>

AbandonedResource::AbandonedResource(GameData* gD) : Event(gD)
{
#ifdef DEBUG
	std::cout << "[EVENTO - RECURSO ABANDONADO] Construindo...\n";
#endif // DEBUG
}

std::string AbandonedResource::applyEvent() const
{
	std::ostringstream final;
	final << "Evento: Recurso Abandonado Encontrado\n\n";

	if(getGameData()->getYear() == 1){
		if ((*getGameData()->getEmpire()).getProds() < (*getGameData()->getEmpire()).getMaxStorage()) {
			(*getGameData()->getEmpire()).receiveProds(ABANDONED_PRODUCT_QTY);
			final << ABANDONED_PRODUCT << "\n\n O produto foi adicionado com sucesso.\n";
		}
		else {
			final << ABANDONED_PRODUCT << "\n\n Nao tem capacidade para adicionar produtos ao armazem do imperio. \n";
		}
	}
	else {
		if ((*getGameData()->getEmpire()).getGold() < (*getGameData()->getEmpire()).getMaxSafeBox()) {
			(*getGameData()->getEmpire()).receiveProds(ABANDONED_GOLD_QTY);
			final << ABANDONED_PRODUCT << "\n\n A unidade de ouro foi adicionada com sucesso.\n";
		}
		else {
			final << ABANDONED_PRODUCT << "\n\n Nao tem capacidade para adicionar ouro ao cofre do imperio. \n";
		}
	}
	return final.str();
}

std::string AbandonedResource::toString() const
{
	return EVENT_ABANDONED_RESOURCE;
}

AbandonedResource* AbandonedResource::clone() const
{
	return new AbandonedResource(*this);
}

AbandonedResource::~AbandonedResource()
{
#ifdef DEBUG
	std::cout << "[EVENTO - RECURSO ABANDONADO] Destruindo...\n";
#endif // DEBUG

}
