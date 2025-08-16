#include <iostream>
#include "Warrior.h"
#include "Inventory.h"
#include "Sword.h"

int main() {
    std::cout << "--- Character Test ---" << std::endl;
    Warrior w("Thorin", 100, 20);
    w.attack();

    std::cout << "\n--- Inventory Test ---" << std::endl;
    Inventory inv;

    Item* sword1 = new Sword("Steel Sword", "A sharp steel sword.", 15);
    Item* sword2 = new Sword("Iron Sword", "A regular iron sword.", 10);

    inv.addItem(sword1);
    inv.addItem(sword2);

    Item* found = inv.getItem("Steel Sword");
    if (found) {
        std::cout << "Found item: " << found->getName() << " - " << found->getDescription() << std::endl;
    } else {
        std::cout << "Item not found." << std::endl;
    }

    std::cout << "\n--- Item Removal Test ---" << std::endl;
    bool removed = inv.removeItem("Steel Sword");
    std::cout << "Was Steel Sword removed? " << (removed ? "Yes" : "No") << std::endl;

    found = inv.getItem("Steel Sword");
    std::cout << "Searching for removed item again: " << (found ? "Found" : "Not found") << std::endl;

    return 0;
}
