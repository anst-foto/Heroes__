#ifndef HEROES_ABSTRACTFACTORY_H
#define HEROES_ABSTRACTFACTORY_H

#include <string>

#include "../Heroes/Hero.h"

using namespace std;

class AbstractFactory {
protected:
    AbstractFactory() {}

public:
    virtual Hero* createDwarf(const string &name) = 0;
    virtual Hero* createElf(const string &name) = 0;
};


#endif //HEROES_ABSTRACTFACTORY_H
