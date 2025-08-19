#include "Character.h"
#include "Sword.h"

Character::Character(const std::string& name, int health)
    : name(name), health(health) {
    sword = new Sword("Basic Sword", "A simple sword.", 10);
}

Character::~Character() {
    delete sword; 
}

std::string Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

void Character::setHealth(int h) {
    health = h;
}

void Character::modifyHealth(int amount) {
    health += amount;
    if (health < 0) health = 0;
}

Sword* Character::getSword() const {
    return sword;
}

Inventory* Character::getInventory() {
    return &inventory;
}
