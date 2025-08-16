#include <iostream>
#include "Sword.h"
#include "Character.h"

Sword::Sword(const std::string& name, const std::string& description, int damage)
    : Item(name, description), damage(damage) {}

void Sword::use(Character& target) {
    // Sword doğrudan kullanılabilir değil, ama override ettik.
    std::cout << "Sword can't be used like a potion!" << std::endl;
}

std::string Sword::getDescription() const {
    return description + " (Damage: " + std::to_string(damage) + ")";
}

int Sword::getDamage() const {
    return damage;
}

