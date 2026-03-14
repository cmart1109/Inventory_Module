// This is the implementation file for the database functions, it will have the function definitions for loading items from the csv file, saving items to the csv file, adding an item to the inventory and showing all items in the inventory.
#include "database.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

    // This function will load the items from the csv file and return a vector of items.
    vector<item> loadItems() 
    {
        vector<item> items;
        ifstream file("items.csv");
        string line;
        getline(file, line); // skip header
        while(getline(file, line))
        {
            stringstream ss(line);
            string id_str, name, category, price_str, refundable_str;
            getline(ss, id_str, ',');
            getline(ss, name, ',');
            getline(ss, category, ',');
            getline(ss, price_str, ',');
            getline(ss, refundable_str, ',');

            int id = stoi(id_str);
            float price = stof(price_str);
            bool refundable = (refundable_str == "1" || refundable_str == "true");

            item newItem(id, name, category, price, refundable);
            items.push_back(newItem);
        }
        return items;
    }


    // This function will save the items to the csv file, it will overwrite the existing file.
    void saveItems (vector<item> &items)
    { 
        ofstream file("items.csv");
        file << "id,name,category,price,refundable\n";
        for (auto &i : items)
        {
            file << i.toCSV() << endl;
        }
    }

    // This function will add an item to the inventory, it will ask the user for the item information and add it to the vector of items.
    void addItem(vector<item> &items)
    {
        string name;
        string category;
        float price;

        cout << "Item Name: \n";
        cin >> name;
        cout << "Category: \n";
        cin >> category;
        cout << "Price: \n";
        cin >> price;

        item newItem(name, category, price);
        items.push_back(newItem);
        cout << "Item Added\n";
    };

    // this function will show all the items in the inventory, it will loop through the vector of items and call the showInfo function for each item.
    void showAllItems(vector<item> &items)
    {
        for (auto &i : items)
        {
            i.showInfo();
        }
    };

    // This function will delete an item from the inventory, it will ask the user for the item id and delete the item from the vector of items.
    void deleteItem(vector<item> &items, int id)
    {
        for (auto it = items.begin(); it != items.end(); ++it)
        {
            if (it->getId() == id)
            {
                items.erase(it);
                cout << "Item Deleted\n";
                return;
            }
        }
    };