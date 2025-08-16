
#include "Warrior.h"
#include <iostream>
#include "Sword.h"

Warrior::Warrior(const std::string& name, int health, int strength)
    : Character(name, health), strength(strength) {}

void Warrior::attack() {
    int damage = strength + sword->getDamage();
    std::cout << getName() << " attacks with sword for " << damage << " damage!" << std::endl;
}

