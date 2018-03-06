#include "Warrior.h"
#include "strikes/SwordStrike.h"

Warrior::Warrior(const string &name) : Character(name) {
    this->strikes.push_back(new SwordStrike());
}