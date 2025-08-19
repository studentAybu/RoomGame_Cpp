#include "Inventory.h"
#include <iostream>

Inventory::Inventory() = default;

Inventory::~Inventory() = default;

bool Inventory::addItem(std::unique_ptr<Item> item) {
    if (items.size() >= 10) {
        std::cout << "Inventory full!\n";
        return false;
    }
    items.push_back(std::move(item));
    return true;
}

bool Inventory::removeItem(const std::string& itemName) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->getName() == itemName) {
            items.erase(it);
            return true;
        }
    }
    return false;
}

Item* Inventory::getItem(const std::string& itemName) {
    for (auto& item : items) {
        if (item->getName() == itemName) {
            return item.get();
        }
    }
    return nullptr;
}

bool Inventory::useItemOn(const std::string& itemName, Character& target) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if ((*it)->getName() == itemName) {
            (*it)->use(target);
            items.erase(it);
            return true;
        }
    }
    return false;
}