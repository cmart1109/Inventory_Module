// this is the item class, it will have the properties of an item and the functions to show the item information and convert the item to a csv format.
#ifndef ITEM_H
#define ITEM_H

#include <string>

class item {
    public: 
        item();
        item(std::string name, std::string category, float price);
        item(int id, std::string name, std::string category, float price, bool refundable);
        void showInfo();
        int getId();
        std::string toCSV();
    private: 
        int _id;
        std::string _name;
        std::string _category;
        float _price;
        bool _refundable;

};

#endif