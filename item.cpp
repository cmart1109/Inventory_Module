#include "item.h"
#include <string>
#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

        item::item(string name, string category, float price)
        {

            _name = name;
            _category = category;
            _price = price;
            _refundable = true;
            _id = rand() % 9000 + 1000;

        };
        void item::showInfo()
        {
            cout << "ID: " << _id << " | Item: " << _name << endl;
        };