#ifndef HERO_FIGHT_CHARACTER_H
#define HERO_FIGHT_CHARACTER_H

#include <iostream>
#include <vector>
#include "jobs/Job.h"

using namespace std;

class Character {
public:
    Character(const string &name, const Job &job);

    void sayHello();
    void sayHelloTo(Character *target);

    int strike(Character &target, int strikeIndex);
    bool isDead();
    void addDamages(int amount);

    const string &getName() const;
    void setName(const string &name);
    int getHealth() const;
    void setHealth(int health);
    const Job &getJob() const;
    void setJob(const Job &job);

protected:
    string name;
    int health;
    Job job;
};


#endif //HERO_FIGHT_CHARACTER_H
