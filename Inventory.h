#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory {
private:
    Item* items[10];
    int itemCount;

public:
    Inventory();
    ~Inventory();

    bool addItem(Item* item);
    bool removeItem(const std::string& itemName);
    Item* getItem(const std::string& itemName);
};

#endif
