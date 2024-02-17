#ifndef HEROES_DWARF_H
#define HEROES_DWARF_H

#include "../Hero.h"

class Dwarf : public Hero {
private:
    static int HEALTH;
    static int DAMAGE;
    static HeroType TYPE;

protected:
    Dwarf(const string &name, HeroSpecialization specialization) : Hero(name, HEALTH, DAMAGE, TYPE, specialization) {}
};

int Dwarf::HEALTH = 95;
int Dwarf::DAMAGE = 15;
HeroType Dwarf::TYPE = HeroType::Dwarf;

#endif //HEROES_DWARF_H
