#include "JewelryBox.h"
#include <iostream>

void JewelryBox::DisplayBox()
{
	std::cout << "\nOwner:" << ownerName << std::endl;
	std::cout << "Wood Type:" << woodType << std::endl;
	std::cout << "Item Count:" << itemCount << std::endl;
	std::cout << "Estimated Cost: $" << estimatedCost << std::endl;
	std::cout << "Completion Percent: " << completionPercent << "%" << std::endl;
}
