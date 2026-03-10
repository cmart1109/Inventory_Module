#ifndef ITEM_H
#define ITEM_H

#include <string>

class item {
    public: 
        item(std::string name, std::string category, float price);
        void showInfo();
    private: 
        int _id;
        std::string _name;
        std::string _category;
        float _price;
        bool _refundable;

};

#endif