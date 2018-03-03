#include "Job.h"

const string &Job::getName() const {
    return name;
}

Job::Job(const string &name): name(name), level(1), strikes() {
}

int Job::getLevel() const {
    return level;
}

void Job::setLevel(int level) {
    Job::level = level;
}

const vector<Strike> &Job::getStrikes() const {
    return strikes;
}

void Job::setStrikes(const vector<Strike> &strikes) {
    Job::strikes = strikes;
}
