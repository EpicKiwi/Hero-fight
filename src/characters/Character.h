#ifndef HERO_FIGHT_CHARACTER_H
#define HERO_FIGHT_CHARACTER_H

#include <iostream>
#include <vector>
#include "strikes/Strike.h"

using namespace std;

class Character {
public:
    Character(const string &name);
    virtual ~Character();

    void sayHello();
    void sayHelloTo(const Character &target);

    int strike(Character &target, int strikeIndex);
    bool isDead();
    void addDamages(int amount);

    const string &getName() const;
    void setName(const string &name);
    int getHealth() const;
    void setHealth(int health);
    int getLevel() const;
    void setLevel(int level);
    const vector<Strike *> &getStrikes() const;
    void setStrikes(const vector<Strike *> &strikes);

protected:
    string name;
    int health;
    int level;
    vector<Strike*> strikes;
};


#endif //HERO_FIGHT_CHARACTER_H
