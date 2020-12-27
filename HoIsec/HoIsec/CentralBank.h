#pragma once
#ifndef CENTRALBANK_H
#define CENTRALBANK_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"
#include "Storage.h"
#include "SafeBox.h"

class CentralBank: public Technology
{
private:
	Storage* empireStorage;
	SafeBox* empireSafeBox;
public:
	CentralBank(Storage* empireStorage, SafeBox* empireSafeBox);
	void applyTech();
	virtual ~CentralBank() override;
};
#endif // !CENTRALBANK_H



