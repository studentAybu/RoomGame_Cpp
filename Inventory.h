#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <memory>
#include <vector>

class Inventory {
public:
    Inventory();
    ~Inventory();
    
    bool addItem(std::unique_ptr<Item> item);
    bool removeItem(const std::string& itemName);
    Item* getItem(const std::string& itemName);
    bool useItemOn(const std::string& itemName, Character& target);

private:
    std::vector<std::unique_ptr<Item>> items;
};

#endif