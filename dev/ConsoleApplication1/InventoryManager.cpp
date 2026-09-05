#include "InventoryManager.h"
#include <iostream>

void InventoryManager::DisplayMenu()
{
	std::cout << "\n===Jewelry Box Inventory===" << std::endl;
	std::cout << "1. Add Item" << std::endl;
	std::cout << "2. View Items" << std::endl;
	std::cout << "3. Exit" << std::endl;
}
