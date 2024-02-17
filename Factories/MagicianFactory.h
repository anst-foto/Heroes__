#ifndef HEROES_MAGICIANFACTORY_H
#define HEROES_MAGICIANFACTORY_H

#include "AbstractFactory.h"
#include "../Heroes/Dwarf/DwarfMagician.h"
#include "../Heroes/Elf/ElfMagician.h"

class MagicianFactory : public AbstractFactory {
public:
    MagicianFactory() {}

    Hero *createDwarf(const string &name) override {
        return new DwarfMagician(name);
    }

    Hero *createElf(const string &name) override {
        return new ElfMagician(name);
    }
};


#endif //HEROES_MAGICIANFACTORY_H
