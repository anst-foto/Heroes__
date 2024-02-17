
#ifndef HEROES_ELFMAGICIAN_H
#define HEROES_ELFMAGICIAN_H

#include "Elf.h"
#include "../IMagician.h"

class ElfMagician : public  Elf, public IMagician {
private:
    const int MANA = 25;

public:
    explicit ElfMagician(const string &name) : Elf(name, SPECIALIZATION) {
        mana = MANA;
    }

    void Attack(Hero *enemy) override {
        auto totalDamage = damage + mana;
        auto newHealth = enemy->getHealth() - totalDamage;
        enemy->setHealth(newHealth);
    }
};


#endif //HEROES_ELFMAGICIAN_H
