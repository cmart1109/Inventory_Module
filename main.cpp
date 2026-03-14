#include "item.h"
#include <iostream>
#include <ctime>
#include <vector>

vector<item> loadItems();
void saveItems(vector<item> &items);
void addItem(vector<item> &items);

using namespace std;

int main() {
    vector<item> items = loadItems();
    addItem(items);
    saveItems(items);
    return 0;
}