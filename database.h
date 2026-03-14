// This is the header file for the database functions, it will have the function prototypes for loading items from the csv file, saving items to the csv file, adding an item to the inventory and showing all items in the inventory.

#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "item.h"

std::vector<item> loadItems();
void saveItems(std::vector<item> &items);
void addItem(std::vector<item> &items);
void showAllItems(std::vector<item> &items);
void deleteItem(std::vector<item> &items, int id);

#endif