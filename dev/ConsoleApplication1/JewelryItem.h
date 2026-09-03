#include <iostream>
#include "JewelryItem.h"

using namespace std;

void JewelryItem::Display()
{
	cout << "\nItem Name:" << name << endl;
	cout << "Type: " << type << endl;
	cout << "Value: $" << value << endl;
}
