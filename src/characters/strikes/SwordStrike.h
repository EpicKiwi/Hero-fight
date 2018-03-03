#ifndef HERO_FIGHT_SWORDSTRIKE_H
#define HERO_FIGHT_SWORDSTRIKE_H


#include "Strike.h"

class SwordStrike : public Strike {
public:
    SwordStrike();

    int getDamages() override;

};


#endif //HERO_FIGHT_SWORDSTRIKE_H
