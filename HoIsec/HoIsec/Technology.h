#pragma once
#ifndef TECHNOLOGY_H
#define TECHNOLOGY_H
#include <iostream>

class Empire;

class Technology
{
protected:
	bool active;
public:
	virtual void applyTech(Empire empire) const = 0;
	void setActiveTrue();
	void setActiveFalse();
	bool getActive() const;

};
#endif // !TECHNOLOGY_H

