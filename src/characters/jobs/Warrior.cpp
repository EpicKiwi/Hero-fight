#include "Warrior.h"
#include "../strikes/SwordStrike.h"

Warrior::Warrior() : Job("Guerrier") {
    this->strikes.push_back(*(new SwordStrike()));
}
