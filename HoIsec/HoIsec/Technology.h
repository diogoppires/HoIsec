#pragma once
#ifndef TECHNOLOGY_H
#define TECHNOLOGY_H
#include <iostream>

class Empire;

class Technology{
protected:
	bool active;
	int price;
public:
	Technology(int price);
	virtual void applyTech() const = 0;
	void setActiveTrue();
	void setActiveFalse();
	bool getActive() const;
	int getPrice() const;
	void setPrice(int price);
	~Technology();

};
#endif // !TECHNOLOGY_H

