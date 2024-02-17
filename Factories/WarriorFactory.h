#ifndef HEROES_WARRIORFACTORY_H
#define HEROES_WARRIORFACTORY_H

#include "AbstractFactory.h"

#include "../Heroes/Dwarf/DwarfWarrior.h"
#include "../Heroes/Elf/ElfWarrior.h"

class WarriorFactory : public AbstractFactory {
public:
    WarriorFactory() {}

    Hero *createDwarf(const string &name) override {
        return new DwarfWarrior(name);
    }

    Hero *createElf(const string &name) override {
        return new ElfWarrior(name);
    }
};


#endif //HEROES_WARRIORFACTORY_H
