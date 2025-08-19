#ifndef WIZARD_H
#define WIZARD_H

#include "Character.h"

class Wizard : public Character {
private:
    int mana;

public:
    Wizard(const std::string& name, int health, int mana);
    void attack() override;
};

#endif
