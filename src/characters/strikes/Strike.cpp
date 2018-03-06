#include "Strike.h"

Strike::Strike(const string &name) : name(name) {}

const string &Strike::getName() const {
    return name;
}

void Strike::setName(const string &name) {
    Strike::name = name;
}
