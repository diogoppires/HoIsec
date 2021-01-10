#pragma once
#ifndef CENTRALBANK_H
#define CENTRALBANK_H
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
	void applyTech() override;
	int useEffect(Territory* terr) override { return 0; }
	CentralBank* clone() const override;
	virtual ~CentralBank() override;
};
#endif // !CENTRALBANK_H



