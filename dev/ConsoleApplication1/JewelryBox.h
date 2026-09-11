#pragma once

#include <string>



class JewelryBox
{
public:
	std::string ownerName;
	std::string woodType;
	int itemCount;
	double estimatedCost;
	int completionPercent;


	void DisplayBox();
};

