#include "Rogue.h"
#include <iostream>
#include "Sword.h"

Rogue::Rogue(const std::string& name, int health, int agility)
    : Character(name, health), agility(agility) {}

void Rogue::attack() {
    int damage = agility + sword->getDamage();
    std::cout << getName() << " strikes swiftly for " << damage << " damage!" << std::endl;
}
