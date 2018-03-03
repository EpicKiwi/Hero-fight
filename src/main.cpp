#include <iostream>
#include "characters/Character.h"
#include "characters/jobs/Warrior.h"
#include "characters/jobs/Wizard.h"

int main(int argc, char *argv[]) {

    Character *bobby = new Character("Bobby", *(new Warrior()));
    bobby->sayHello();

    cout << endl;

    Character *tobby = new Character("Tobby", *(new Wizard()));
    tobby->sayHelloTo(bobby);

    cout << endl;

    cout << bobby->getName() << " frappe " << tobby->getName() << " avec " << bobby->getJob().getStrikes()[0].getName() << endl;
    int amount = bobby->strike(*(tobby),0);
    cout << bobby->getName() << " à infligé " << to_string(amount) << " points de degats et " << tobby->getName() << " à maintenant " << tobby->getHealth() << " points de vie" << endl;

}