#include "JewelryBox.h"
#include <iostream>

void JewelryBox::DisplayBox()
{
	std::cout << "\nJewelry Box Owner:" << ownerName << std::endl;
	std::cout << "Item Count:" << itemCount << std::endl;
}
