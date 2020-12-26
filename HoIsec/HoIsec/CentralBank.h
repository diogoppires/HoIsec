#pragma once
#ifndef CENTRALBANK_H
#define CENTRALBANK_H
#include <iostream>
#include "Empire.h"
#include "Technology.h"

class CentralBank:public Technology
{
public:
	void applyTech(Empire empire) const;
};
#endif // !CENTRALBANK_H



