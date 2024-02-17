#ifndef HEROES_DWARFMAGICIAN_H
#define HEROES_DWARFMAGICIAN_H

#include "Dwarf.h"
#include "../IMagician.h"

class DwarfMagician : public Dwarf, public IMagician {
private:
    const int MANA = 20;

public:
    explicit DwarfMagician(const string &name) : Dwarf(name, SPECIALIZATION) {
        mana = MANA;
    }

    void Attack(Hero *enemy) override {
        auto totalDamage = damage + mana;
        auto newHealth = enemy->getHealth() - totalDamage;
        enemy->setHealth(newHealth);
    }
};


#endif //HEROES_DWARFMAGICIAN_H
