#pragma once
#ifndef FILEREADER_H
#define FILEREADER_H
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include "data.h"

class FileReader {
private:
	std::ifstream fileI;
	Utils converter;

	bool is_number(const std::string& s);
	bool verifyData(const std::string& data);
	bool verifyArgs(std::string territory, std::string quant);

public:
	FileReader(std::string fileName);
	std::vector<std::string> readFile();
	~FileReader();

	FileReader(const FileReader& rec) = delete;
	FileReader& operator=(const FileReader& rec) = delete;
};

#endif // !FILEREADER_H
