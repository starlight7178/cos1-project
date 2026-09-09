#pragma once
#include <string>

class JewelryItem
{
public:
	std::string name;
	std::string type;
	std::string material;
	double value;

	void Display();
};
