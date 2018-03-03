#ifndef HERO_FIGHT_FIREBALL_H
#define HERO_FIGHT_FIREBALL_H


#include "Strike.h"

class Fireball : public Strike{
public:

    Fireball();

    int getDamages() override;

};


#endif //HERO_FIGHT_FIREBALL_H
