#include "item.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    item itemTest("Milk", "Weapons", 19.99);
    itemTest.showInfo();
    return 0;
}