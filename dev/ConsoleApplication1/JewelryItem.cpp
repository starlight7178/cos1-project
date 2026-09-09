#include "JewelryItem.h"
#include <iostream>

void JewelryItem::display() 
{
	std::cout << "\nItem Name:" << name << std::endl;
	std::cout << "Type:" << type << std::endl;
	std::cout << "Material:" << material << std::endl;
	std::cout << "Value: $" << value << std::endl;

