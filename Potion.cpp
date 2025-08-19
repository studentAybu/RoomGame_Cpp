#include "Potion.h"
#include "Character.h"
#include <iostream>

Potion::Potion(const std::string& name, const std::string& description, int healingAmount)
    : Item(name, description), healingAmount(healingAmount) {}

void Potion::use(Character& target) {
    target.modifyHealth(healingAmount);
    std::cout << target.getName() << " uses " << name << " and heals " << healingAmount << " health!\n";
}

std::string Potion::getDescription() const {
    return description + " (Heals: " + std::to_string(healingAmount) + ")";
}