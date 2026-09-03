#include "JewelryBox.h"
#include <iostream>

using namespace std;

void JewelryBox::DisplayBox()
{
	cout << "\nJewelry Box Owner: " << ownerName << endl;
	cout << "Number of Items:" << itemCount << endl;
}
