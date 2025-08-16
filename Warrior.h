#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"

class Warrior : public Character {
private:
    int strength;

public:
    Warrior(const std::string& name, int health, int strength);
    void attack() override;
};

#endif
