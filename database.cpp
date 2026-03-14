#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>
#include "item.h"
using namespace std;

    vector<item> loadItems() 
    {
        vector<item> items;
        ifstream file("items.csv");
        string line;
        getline(file, line);
        while(getline(file, line))
        {
            stringstream ss(line);
            string id, name, category, price, refundable;
            getline(ss, id, ',');
            getline(ss, name, ',');
            getline(ss, category, ',');
            getline(ss, price, ',');
            getline(ss, refundable, ',');

            item newItem(name, category, stof(price));
            items.push_back(newItem);
        }
        return items;
    }

    void saveItems (vector<item> &items)
    { 
        ofstream file("items.csv");
        for (auto &i : items)
        {
            file << i.toCSV() << endl;
        }
    }

    void addItem(vector<item> &items)
    {
        string name;
        string category;
        float price;

        cout << "Item Name: ";
        cin >> name;
        cout << "Category: ";
        cin >> category;
        cout << "Price: ";
        cin >> price;

        item newItem(name, category, price);
        items.push_back(newItem);
        cout << "Item Added\n";

    }