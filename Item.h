#ifndef ITEM_H
#define ITEM_H

#include "Usable.h"
#include <string>

class Item : public Usable {
protected:
    std::string name;
    std::string description;

public:
    Item(const std::string& name, const std::string& description);
    virtual ~Item();

    std::string getName() const;
};

#endif
