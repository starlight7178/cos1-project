// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "JewelryItem.h"
#include "JewelryBox.h"
#include "InventoryManager.h"

int main()
{
    InventoryManager manager;
    JewelryItem item;
    JewelryBox box;

    item.name = "Gold Necklace";
    item.type = "Necklace";
    item.material = "Gold";
    item.value = 150.00;

        box.ownerName = "Tara";
        box.woodType = "Oak";
        box.itemCount = 1;
        box.estimatedCost = 125.00;
        box.completionPercent = 45;

        int choice = 0;

        while (choice != 4)
        {
            manager.DisplayMenu();
            std::cout << "\nEnter choice:";
            std::cin >> choice;

            if (choice == 1)
            {
                std::cout << "\nFeature coming soon!" << std::endl;
            }
            else if (choice == 2)
            {
                item.Display();
                box.DisplayBox();
            }
            else if (choice == 3)
            {
                std::cout << "\nViewing Jewelry Box Project..." << std::endl;
                box.DisplayBox();
            }
                std::cout << "\nGoodbye!" << std::endl;
            }
            else
            {
                std::cout << "Invalid choice! Please try again." << std::endl;
            }

            return 0;
        };

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
