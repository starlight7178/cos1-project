#include "JewelryItem.h"
#include <iostream>

void JewelryItem::display() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Type: " << type << std::endl;
	std::cout << "Value: $" << value << std::endl;
