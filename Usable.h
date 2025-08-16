#ifndef USABLE_H
#define USABLE_H

#include <string>
class Character; // Forward declaration

class Usable {
public:
    virtual ~Usable() {}
    virtual void use(Character& target) = 0;
    virtual std::string getDescription() const = 0;
};

#endif
