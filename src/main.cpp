#include <iostream>
#include "characters/Character.h"
#include "characters/Warrior.h"
#include "characters/Wizard.h"

int main(int argc, char *argv[]) {

    Warrior bobby("Bobby");
    bobby.sayHello();

    cout << endl;

    Wizard tobby("Tobby");
    tobby.sayHelloTo(bobby);

    cout << endl;

    cout << bobby.getName() << " frappe " << tobby.getName() << " avec " << bobby.getStrikes()[0]->getName() << endl;
    int amount = bobby.strike(tobby,0);
    cout << bobby.getName() << " à infligé " << to_string(amount) << " points de degats et " << tobby.getName() << " à maintenant " << tobby.getHealth() << " points de vie" << endl;
}