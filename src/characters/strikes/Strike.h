#ifndef HERO_FIGHT_STRIKE_H
#define HERO_FIGHT_STRIKE_H

#include <iostream>

using namespace std;

class Strike {
public:

    Strike(const string &name);

    virtual int getDamages();

    const string &getName() const;
    void setName(const string &name);

protected:

    string name;

};


#endif //HERO_FIGHT_STRIKE_H
