#pragma once
#ifndef STORAGE_H
#define STORAGE_H
#include <string>

class Storage
{
private:
	int products;
	int maxProducts;
public:
	//Constructor
	Storage();
	Storage(const Storage& orig);

	//Getter
	int getProducts() const;
	int getMaxProducts() const;

	bool addProducts(int quant);
	bool subProducts(int quant);

	//Setter
	void setMaxProducts(int max);
	int setProducts(int value);

	//toString
	std::string toString() const;
	//Destructor
	~Storage();
};

#endif // !STORAGE_H
