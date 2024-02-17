#ifndef HEROES_DWARFWARRIOR_H
#define HEROES_DWARFWARRIOR_H

#include "Dwarf.h"
#include "../IWarrior.h"

class DwarfWarrior : public Dwarf, public IWarrior {
private:
    const int POWER = 35;

public:
    explicit DwarfWarrior(const string &name) : Dwarf(name, SPECIALIZATION) {
        power = POWER;
    }

    void Attack(Hero *enemy) override {
        auto totalDamage = damage + power;
        auto newHealth = enemy->getHealth() - totalDamage;
        enemy->setHealth(newHealth);
    }
};

#endif //HEROES_DWARFWARRIOR_H
