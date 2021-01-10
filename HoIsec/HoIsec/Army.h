#pragma once
#ifndef ARMY_H
#define ARMY_H
class Army
{
private:
	int miliForce;
	int maxMiliForce;

public:
	Army(int miliForce);
	Army(const Army& orig);
	~Army();
	bool addMiliForce(int value);
	bool subMiliForce(int value);
	int getMiliForce() const;
	int getMaxMiliForce() const;
	void setMaxMiliForce(int max);
};

#endif // !ARMY_H


