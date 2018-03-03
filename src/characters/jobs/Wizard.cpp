#include "Wizard.h"
#include "../strikes/Fireball.h"

Wizard::Wizard() : Job("Magicien") {
    this->strikes.push_back(*(new Fireball()));
}
