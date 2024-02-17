#ifndef HEROES_GAME_H
#define HEROES_GAME_H

#include "./Heroes/HeroTypes.h"

#include "./Factories/MagicianFactory.h"
#include "./Factories/WarriorFactory.h"

class Game {
public:
    static Hero *createHero(string name, HeroType type, HeroSpecialization specialization) {
        AbstractFactory *factory = nullptr;
        switch (specialization) {
            case Magician:
                factory = new MagicianFactory();
                break;
            case Warrior:
                factory = new WarriorFactory();
                break;
        }
        switch (type) {
            case Elf:
                return factory->createElf(name);
            case Dwarf:
                return factory->createDwarf(name);
        }
    }
};


#endif //HEROES_GAME_H
