
#include "Item.h"

Item::Item(const std::string& name, const std::string& description)
    : name(name), description(description) {}

Item::~Item() {}

std::string Item::getName() const {
    return name;
}

