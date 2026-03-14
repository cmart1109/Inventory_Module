// This is the implementation file for the item class, it will have the function definitions for the item class, it will have the properties of an item and the functions to show the item information and convert the item to a csv format.

#include "item.h"
#include <string>
#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

        item::item() {};

        item::item(string name, string category, float price)
        {

            _name = name;
            _category = category;
            _price = price;
            _refundable = true;
            _id = rand() % 9000 + 1000;

        }

        item::item(int id, string name, string category, float price, bool refundable)
        {
            _id = id;
            _name = name;
            _category = category;
            _price = price;
            _refundable = refundable;
        }

        // This function will show the item information, it will print the item information to the console.
        void item::showInfo()
        {
            cout << "ID: " << _id << " | Item: " << _name << " | Category: " << _category << " | Price: $" << _price << " | Refundable: " << (_refundable ? "Yes" : "No") << endl;
        }

        // This function will return the id of the item, it will return the _id property of the item.
        int item::getId() {
            return _id;
        }

        // This function will convert the item information to a csv format, it will return a string in the format of id,name,category,price,refundable.
        string item::toCSV() {
            return to_string(_id) + "," + 
            _name + "," + 
            _category + "," + 
            to_string(_price) + "," + 
            to_string(_refundable); 
        }