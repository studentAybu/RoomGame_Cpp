#include "Wizard.h"
#include <iostream>
#include "Sword.h"

Wizard::Wizard(const std::string& name, int health, int mana)
    : Character(name, health), mana(mana) {}

void Wizard::attack() {
    if (mana >= 10) {
        mana -= 10;
        int damage = 20 + sword->getDamage();
        std::cout << getName() << " casts a powerful spell for " << damage << " damage! Mana left: " << mana << std::endl;
    } else {
        std::cout << getName() << " tries to cast a spell but doesn't have enough mana!" << std::endl;
    }
}
