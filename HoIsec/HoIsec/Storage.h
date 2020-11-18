#pragma once
#ifndef STORAGE_H
#define STORAGE_H
#include <iostream>
#include <string>
#include <sstream>

class Storage
{
private:
	int products;
public:
	//Constructor
	Storage();

	//Getter
	int getProducts() const;

	bool addProducts(int quant);
	bool subProducts(int quant);

	//toString
	std::string toString() const;
	//Destructor
	~Storage();
};

#endif // !STORAGE_H
