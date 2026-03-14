// Welcome to my Inventory Management System, this program will allow you to add items to your inventory, show all items and exit the program. The items will be stored in a csv file and loaded when the program starts. The program will also generate a random id for each item and save it to the csv file. The program will also show if the item is refundable or not based on the price of the item. If the price is greater than 20, the item is refundable, otherwise it is not refundable.

#include "database.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
// This is the main funcion of the program, it will show the menu and call the functions to add items, show all items and exit the program.
int main() {
    cout << "Welcome to the Inventory Management System\n";
    srand(time(0)); 

    int choice = 0;
    vector<item> items = loadItems();

    while (choice != 3) {
        cout << "-----------------------------\n";
        cout << "Please select what you want to do:\n";
        cout << "1. Add Item\n";
        cout << "2. Show All Items\n";
        cout << "3. Exit\n";
        cout << "4. Delete Item\n";
        cout << "-----------------------------\n";
        cin >> choice;
        
        if (choice == 3) 
        {
            cout << "Exiting...\n";
            break;
        }
        
        else if (choice == 1)
        {
            addItem(items);
            saveItems(items);
        }
        
        else if (choice == 2)
        {
            showAllItems(items);
        }

        else if (choice == 4)
        {
            int id;
            cout << "Enter the ID of the item you want to delete: \n";
            cin >> id;
            deleteItem(items, id);
            saveItems(items);
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}