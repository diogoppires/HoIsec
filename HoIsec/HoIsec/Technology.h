#pragma once
#ifndef TECHNOLOGY_H
#define TECHNOLOGY_H
#include "Territory.h"
class Technology {
protected:
	bool active;
	int price;
public:
	Technology(int price);
	virtual void applyTech() = 0;
	virtual Technology* clone() const = 0;
	void setActiveTrue();
	void setActiveFalse();
	virtual int useEffect(Territory* terr) = 0;
	bool getActive() const;
	int getPrice() const;
	virtual ~Technology();

};
#endif // !TECHNOLOGY_H

