#include "InventoryManager.h"
#include <iostream>

void InventoryManager::DisplayMenu()
{
	std::cout << "\n===Jewelry Box Project Manager===" << std::endl;
	std::cout << "1. Add JewelryItem" << std::endl;
	std::cout << "2. View Jewelry Item" << std::endl;
	std::cout << "3. View Jewelry Box Project" << std::endl;
	std::cout << "4. Exit" << std::endl;
}
