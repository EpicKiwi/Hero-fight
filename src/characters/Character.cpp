#include "Character.h"

Character::Character(const std::string &name) : name(name), health(100), level(1) {
}

Character::~Character() {
    for(Strike* strike : this->strikes){
        delete strike;
    }
}

const std::string &Character::getName() const {
    return name;
}

void Character::setName(const std::string &name) {
    Character::name = name;
}

void Character::sayHello() {
    cout << "Salut tout le monde ! je suis " << this->name << " !" << endl;
    cout << "Je suis de niveau " << to_string(this->getLevel()) << "." << endl;
}

void Character::sayHelloTo(const Character &target) {
    cout << "Salut " << target.getName() << " ! Je suis " << this->name << " ! " << endl;
    cout << "Je suis de niveau " << to_string(this->getLevel()) << "." << endl;
}

int Character::strike(Character &target, int strikeIndex) {
    Strike* strike = this->getStrikes()[strikeIndex];
    int damageAmount = strike->getDamages();
    target.addDamages(damageAmount);
    return damageAmount;
}

void Character::addDamages(int amount) {
    this->health -= amount;
}

// GETTERS AND SETTERS

int Character::getHealth() const {
    return health;
}

void Character::setHealth(int health) {
    Character::health = health;
}

bool Character::isDead() {
    return this->health <= 0;
}

int Character::getLevel() const {
    return level;
}

void Character::setLevel(int level) {
    Character::level = level;
}

const vector<Strike *> &Character::getStrikes() const {
    return strikes;
}

void Character::setStrikes(const vector<Strike *> &strikes) {
    Character::strikes = strikes;
}
