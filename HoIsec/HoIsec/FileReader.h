#pragma once
#ifndef FILEREADER_H
#define FILEREADER_H
#include <fstream>
#include <string>
#include <iostream>

class FileReader {
private:
	std::ifstream fileI;
public:
	//Constructor
	FileReader(std::string fileName);
	
	void readFile(std::string& type, int& num);

	//Destructor
	~FileReader();
};

#endif // !FILEREADER_H
