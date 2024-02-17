#ifndef HEROES_ELF_H
#define HEROES_ELF_H

#include "../Hero.h"

class Elf : public Hero {
private:
    static int HEALTH;
    static int DAMAGE;
    static HeroType TYPE;

protected:
    Elf(const string &name, HeroSpecialization specialization) : Hero(name, HEALTH, DAMAGE, TYPE, specialization){}
};

int Elf::HEALTH = 100;
int Elf::DAMAGE = 10;
HeroType Elf::TYPE = HeroType::Elf;

#endif //HEROES_ELF_H
