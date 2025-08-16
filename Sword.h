#ifndef SWORD_H
#define SWORD_H

#include "Item.h"

class Sword : public Item {
private:
    int damage;

public:
    Sword(const std::string& name, const std::string& description, int damage);
    void use(Character& target) override;
    std::string getDescription() const override;
    int getDamage() const;
};

#endif
