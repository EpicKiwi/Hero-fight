#include "Wizard.h"
#include "strikes/Fireball.h"

Wizard::Wizard(const string &name) : Character(name) {
    this->strikes.push_back(new Fireball());
}
