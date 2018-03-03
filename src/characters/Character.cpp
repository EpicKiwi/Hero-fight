#include "Character.h"

Character::Character(const std::string &name, const Job &job) : name(name), job(job), health(100) {
}

const std::string &Character::getName() const {
    return name;
}

void Character::setName(const std::string &name) {
    Character::name = name;
}

void Character::sayHello() {
    cout << "Salut tout le monde ! je suis " << this->name << " !" << endl;
    cout << "Je suis un " << this->job.getName() << " de niveau " << to_string(this->job.getLevel()) << "." << endl;
}

void Character::sayHelloTo(Character *target) {
    cout << "Salut " << target->getName() << " ! Je suis " << this->name << " ! " << endl;
    cout << "Je suis " << this->job.getName() << " de niveau " << to_string(this->job.getLevel()) << "." << endl;
}

int Character::strike(Character &target, int strikeIndex) {
    Strike strike = this->job.getStrikes()[strikeIndex];
    int damageAmount = strike.getDamages();
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

const Job &Character::getJob() const {
    return job;
}

void Character::setJob(const Job &job) {
    Character::job = job;
}
