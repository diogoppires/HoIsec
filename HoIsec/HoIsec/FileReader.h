#pragma once
#ifndef FILEREADER_H
#define FILEREADER_H
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "data.h"

class FileReader {
private:
	std::ifstream fileI;

	bool verifyData(std::string data);
public:
	//Constructor
	FileReader(std::string fileName);
	std::vector<std::string> readFile();
	//Destructor
	~FileReader();
};

#endif // !FILEREADER_H
