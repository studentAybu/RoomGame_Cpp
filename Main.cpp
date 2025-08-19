#include <iostream>
#include <memory>
#include "Warrior.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Potion.h"
#include "Sword.h"

void printCharacterStats(Character& c) {
    std::cout << "Name: " << c.getName() << "\n";
    std::cout << "Health: " << c.getHealth() << "\n";
    std::cout << "Sword: " << c.getSword()->getDescription() << "\n";
    std::cout << "----------------------\n";
}

int main() {
    Warrior warrior("Aragorn", 120, 25);
    Wizard wizard("Gandalf", 100, 50);
    Rogue rogue("Legolas", 90, 30);

    std::cout << "=== Character Info ===\n";
    printCharacterStats(warrior);
    printCharacterStats(wizard);
    printCharacterStats(rogue);

    warrior.modifyHealth(-20);
    wizard.setHealth(80);
    rogue.modifyHealth(15);

    std::cout << "\n=== After Health Modifications ===\n";
    printCharacterStats(warrior);
    printCharacterStats(wizard);
    printCharacterStats(rogue);

    std::cout << "\n=== Using Potions ===\n";

    auto potion1 = std::make_unique<Potion>("Healing Potion", "Restores 30 health", 30);
    auto potion2 = std::make_unique<Potion>("Mana Potion", "Restores magic", 25);

    warrior.getInventory()->addItem(std::move(potion1));
    if (warrior.getInventory()->useItemOn("Healing Potion", warrior)) {
        std::cout << warrior.getName() << " used a Healing Potion!\n";
    }

    wizard.getInventory()->addItem(std::move(potion2));
    wizard.getInventory()->useItemOn("Mana Potion", wizard);

    printCharacterStats(warrior);
    printCharacterStats(wizard);

    std::cout << "\n=== Attacks ===\n";
    warrior.attack();
    wizard.attack();
    rogue.attack();

    std::cout << "\n=== Inventory Capacity Test ===\n";
    for (int i = 0; i < 11; ++i) {
        auto tempPotion = std::make_unique<Potion>("Potion" + std::to_string(i), "Test Potion", 5);
        bool added = rogue.getInventory()->addItem(std::move(tempPotion));
        if (!added) {
            std::cout << "Failed to add Potion" << i << " - Inventory full!\n";
        }
    }

    std::cout << "\n=== Inventory Item Removal ===\n";
    bool removed = rogue.getInventory()->removeItem("Potion3");
    if (removed) {
        std::cout << "Potion3 removed successfully from Rogue's inventory.\n";
    } else {
        std::cout << "Potion3 not found.\n";
    }

    return 0;
}
