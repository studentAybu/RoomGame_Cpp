#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Inventory.h"
#include "Sword.h"

class Character {
public:
    Character(const std::string& name, int health);
    virtual ~Character();  

    void modifyHealth(int amount);
    std::string getName() const;
    int getHealth() const;
    void setHealth(int h);
    Inventory* getInventory(); 
    Sword* getSword() const;

    virtual void attack() = 0;

protected:
    std::string name;
    int health;
    Inventory inventory;
    Sword* sword;  
};

#endif
