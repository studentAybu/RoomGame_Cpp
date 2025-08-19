#ifndef ITEM_H
#define ITEM_H

#include <string>
class Character;

class Item {
public:
    Item(const std::string& name, const std::string& description);
    virtual ~Item() = default;  // Virtual destructor eklendi
    
    virtual void use(Character& target) = 0;
    virtual std::string getDescription() const;
    std::string getName() const;

protected:
    std::string name;
    std::string description;
};

#endif