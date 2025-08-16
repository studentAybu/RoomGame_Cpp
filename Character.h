#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
class Sword; // Forward declaration

class Character {
private:
    std::string name;
    int health;

protected:
    Sword* sword; // Composition

public:
    Character(const std::string& name, int health);
    virtual ~Character();

    virtual void attack() = 0; 

    std::string getName() const;
    int getHealth() const;
    void setHealth(int health);
    void modifyHealth(int amount);
};

#endif
