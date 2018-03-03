#ifndef HERO_FIGHT_JOB_H
#define HERO_FIGHT_JOB_H

#include <iostream>
#include <vector>
#include "../strikes/Strike.h"

using namespace std;

class Job {
public:
    Job(const string &name);

    const string &getName() const;
    int getLevel() const;
    void setLevel(int level);
    const vector<Strike> &getStrikes() const;
    void setStrikes(const vector<Strike> &strikes);

protected:
    string name;
    int level;
    vector<Strike> strikes;
};


#endif //HERO_FIGHT_JOB_H
