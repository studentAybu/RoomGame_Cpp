
#include "Inventory.h"
#include <iostream>

Inventory::Inventory() : itemCount(0) {}

Inventory::~Inventory() {
    for (int i = 0; i < itemCount; ++i) {
        delete items[i];
    }
}

bool Inventory::addItem(Item* item) {
    if (itemCount >= 10) {
        std::cout << "Inventory full!" << std::endl;
        return false;
    }
    items[itemCount++] = item;
    return true;
}

bool Inventory::removeItem(const std::string& itemName) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i]->getName() == itemName) {
            delete items[i];
            for (int j = i; j < itemCount - 1; ++j) {
                items[j] = items[j + 1];
            }
            itemCount--;
            return true;
        }
    }
    return false;
}

Item* Inventory::getItem(const std::string& itemName) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i]->getName() == itemName) {
            return items[i];
        }
    }
    return nullptr;
}

