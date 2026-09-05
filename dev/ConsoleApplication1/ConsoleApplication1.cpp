// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "JewelryItem.h"
#include "JewelryBox.h"
#include "InventoryManager.h

int main()
{
    InventoryManager manager;
    JewelryItem item;
    JewelryBox box;

    item.name = "Gold Necklace";
    item.type = "Necklace";
    item.value = 150.00;

        box.ownerName = "Tara";
        box.itemCount = 1;

        int choice = 0;

        while (choice != 3) {
            manager.DisplayMenu();
            std::cout << "\nEnter choice:";
            std::cin >> choice;

            if (choice == 1)
            {
                std::cout << " Add item selected" << std::endl;
            }
            else if (choice == 2)
            {
                item.display();
                box.DisplayBox();
            }
            else if (choice == 3)
            {
                std::cout << "Goodbye!" << std::endl;
            }
            else
            {
                std::cout << "Invalid choice!" << std::endl;
            }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
