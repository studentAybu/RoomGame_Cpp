#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item {
public:
    Potion(const std::string& name, const std::string& description, int healingAmount);
    void use(Character& target) override;
    std::string getDescription() const override;

private:
    int healingAmount;
};

#endif